class Solution {
public:
    
  
    // RECURSION
    int solution (vector<int>& arr, int ind, int T, vector<vector<int>>& dp)
    {
        
    if(ind == 0){
        if(T%arr[0] == 0) return T/arr[0];
        else return 1e9;
    }
    
    if(dp[ind][T]!=-1)
        return dp[ind][T];
        
    int notTaken = 0 + solution(arr,ind-1,T,dp);
    
    int taken = 1e9;
    if(arr[ind] <= T)
        taken = 1 + solution(arr,ind,T-arr[ind],dp);
        
    return dp[ind][T] = min(notTaken,taken);
        
        
        
    }
    
    
    
    int coinChange(vector<int>& arr, int T) {
        
       
        
        
        int n= arr.size();
    
    vector<vector<int>> dp(n,vector<int>(T+1,-1));
    int ans =  solution(arr, n-1, T, dp);
    if(ans >= 1e9) return -1;
    return ans;
            
    }
};


//  DYNAMIC


lass Solution {
public:
    
    
    
int coinChange(vector<int>& arr, int T) {
        
    int n= arr.size();
    vector<vector<int>> dp(n,vector<int>(T+1,0));
        
    for(int i = 0;i<=T;i++)
    {
        if(i%arr[0] == 0)
            dp[0][i] = i/arr[0];
        else
            dp[0][i] = 1e9;    
    }
    
        
    for(int i = 1; i<n; i++)
    {
        for(int target = 0; target <= T; target++)
        {
                 
        int notTaken = 0 + dp[i-1][target];
        int taken = 1e9;
            
        if(arr[i] <= target)
            taken = 1 + dp[i][target-arr[i]];
                           
            dp[i][target] = min(taken, notTaken);
        }
    }
                           

        int ans = dp[n-1][T];
    
    if(ans >=1e9)
        return -1;
    return ans;
        
    
    }
};