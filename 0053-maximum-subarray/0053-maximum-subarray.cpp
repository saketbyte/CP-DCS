class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        long long int curr= 0, overall = LONG_MIN;
        
        for(int i =0; i<nums.size();i++)
        {
            curr = curr+nums[i];
            
            overall = curr>overall? curr: overall;
            
            curr = curr<0? 0:curr;
        }
        
        return overall;
    }
};