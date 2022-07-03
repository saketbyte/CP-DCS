/*

First understand recursion logic- We assume we have solution for smaller problems, building upon which we will reach to the final case.


*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int dp[m][n];
        
        // memset(dp, 0, m*n*sizeof(int));
        // dp[0][0] = 1;
        
        for(long long i = 0; i<m;i++)
        {
            for(long long j = 0; j< n; j++)
            {
                if(i ==0 || j == 0)
                    dp[i][j] = 1;
                
                if(i>0 && j>0)
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        
        return dp[m-1][n-1];
        
    }
};

// See notes in OneNote to understand.
