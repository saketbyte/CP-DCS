class Solution {
public:
    
    // house robber pattern
    int deleteAndEarn(vector<int>& arr) {
        
        int mx = INT_MIN;
        for(int i =0;i<arr.size();i++)
            mx = max(mx,arr[i]);
        
        vector<int> freq(mx+1,0);
        
        for(int i =0;i<arr.size();i++)
            freq[arr[i]]++;
        
        
        for(int i =0;i<freq.size();i++)
            freq[i] *= i;
        
           //  for(int i =0;i<freq.size();i++)
           // cout<<"value:"<<freq[i]<<" ";

        
        // algorithm
         vector<int> dp(freq.size(),-1);
        
        int n = mx+1;
            dp[0]=freq[0];

        for(int i=1;i<n;i++)
        {
            int take = freq[i] ;
            if(i>1) 
                take+=dp[i-2];
            int untake = 0 + dp[i-1];

            dp[i] = max(take, untake);
        }
        return  dp[n-1];

        
    }
};