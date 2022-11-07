class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        
        int total = 0, maxSum = A[0], curMax = 0, minSum = A[0], curMin = 0;
        
        /*
        The two possible cases here are:
        1. maxSum : The normal sum which is simply the max sum subarray in the array sequentially.
        2. total-minSu: The sum which is spread across two ends of the subarray, one part on the left end and the other on the right end. So to find for case 2, we are just avoiding the dip of minimum subarray in the middle.
        */
        for (int& a : A) {
            curMax = max(curMax + a, a);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + a, a);
            minSum = min(minSum, curMin);
            total += a;
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
        
        
    }
};