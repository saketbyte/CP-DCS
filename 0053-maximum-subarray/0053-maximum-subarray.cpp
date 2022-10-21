class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        
        int curr_max = 0;
        int max_so_far = INT_MIN;
        int al_neg = INT_MIN;
        
        for(int i = 0; i<n;i++)
        {
            al_neg = max(al_neg, nums[i]);
            curr_max += nums[i];
            
            if(curr_max>max_so_far)
                max_so_far = curr_max;
            
            if(curr_max < 0)
                curr_max = 0;
            
        }
        
        return max(max_so_far,al_neg);
        
        
    }
};