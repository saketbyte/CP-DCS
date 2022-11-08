class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        
        // Score = A[i] + i + A[j] - j
        // The logic is to find maximum first half, 
        // and the maximum second half possible and add them.
        
        int n = A.size();
        int start =A[0] + 0;
        int res = INT_MIN;
        
        for(int i =1;i<n;i++)
        {
            res = max(res, start + A[i]-i);
            start = max(start, A[i]+i);
            
        }
        
        return res;
        
        
        
        
    }
};