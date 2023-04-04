class Solution {
public:
    
      int rob(vector<int>& arr)
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
};