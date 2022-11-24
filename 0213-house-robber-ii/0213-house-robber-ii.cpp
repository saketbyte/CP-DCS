class Solution {
public:
    
    
    int solve(vector<int> &arr)
    {
        
        
        vector<int> dp(arr.size(),-1);
        
        int n = arr.size();
        dp[0]=arr[0];

        for(int i=1;i<n;i++){
            int left = arr[i] ;
            if(i>1) left+=dp[i-2];
            int right = 0 + dp[i-1];

            dp[i] = max(left, right);
        }
        return  dp[n-1];
            
    }
    int rob(vector<int>& nums) {
        vector<int> temp1, temp2;
        int n = nums.size();
        
        if(n==1) return nums[0];
        
        for(int i =0;i<n;i++)
        {
            if(i!=0)
                temp1.push_back(nums[i]);
            if(i!=n-1)
                temp2.push_back(nums[i]);
        }
        
        return max(solve(temp1),solve(temp2));
        
    }
};