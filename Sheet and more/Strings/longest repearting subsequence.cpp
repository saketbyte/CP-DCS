int n=str.length();

// THe logic is to use LCS code by using the same string twice to find the longest common subsequence, but we will not take the 
// letters which have the same index, as they are not allowed to be a part of the repeating subsequenceeeee

     int dp[n+1][n+1];
     for(int i=0;i<=n;i++){
         for(int j=0;j<=n;j++){
             if(i==0 || j==0)
             {
                 dp[i][j]=0;
             }
             else if((str[i-1]==str[j-1]) && i!=j) 
             {
                 dp[i][j]=1+dp[i-1][j-1];
             }
             else
             {
                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
             }
         }
     }
     return dp[n][n];