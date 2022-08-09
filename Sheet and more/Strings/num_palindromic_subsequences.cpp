//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
       int n = str.size();
       
       long long mod = 1e9 + 7;
       
       vector<vector<int>> dp(n, vector<int> (n, 0));
       
       for(int gap = 0; gap < n; gap++)
       {
           for(int i = 0, j = gap; j < n; i++, j++)
           {
               if(gap == 0)
               {
                   dp[i][j] = 1;
               }
               else if(gap == 1)
               {
                   if(str[i] == str[j])
                   {
                       dp[i][j] = 3;
                   }
                   else
                   {
                       dp[i][j] = 2;
                   }
               }
               else
               {
                   if(str[i] == str[j])
                   {
                       dp[i][j] = (dp[i + 1][j] % mod + dp[i][j - 1] % mod + 1 % mod) % mod;
                   }
                   else
                   {
                       dp[i][j] = (dp[i + 1][j] % mod + dp[i][j - 1] % mod - dp[i + 1][j - 1] % mod) % mod;
                   }
               }
           }
       }
       
       if(dp[0][n - 1] < 0)
       {
           return dp[0][n - 1] + mod;
       }
       else
       {
           return dp[0][n - 1];
       }
    
    //   THIS CODE IS FOR PALINDROMIC SUBSTRINGS YAAAR int n = str.size();
       
    //   long long int mod = 1000000000+7;
       
    //   vector<vector<int>> dp(n,vector<int>(n,0));
    //   int count = 0;
       
    //   for(int i=0;i<n;i++)
    //   {
    //       dp[i][i] = 1;
    //       count++;
    //   }
    
       
    //   for(int i = 0;i<n-1;i++)
    //   {
    //       if(str[i]==str[i+1])
    //       {
    //             dp[i][i+1] = 1;
    //             count++;
    //       }
    //   }
       
       
    //   for(int gap = 3; gap < n; gap++)
    //   {
    //       for(int i = 0; i<n - 1 - gap; i++)
    //       {
    //           int j = i + gap -1;
               
    //           if(dp[i+1][j-1] == 1 & str[i] == str[j] )
    //           { dp[i][j] = 1;
    //                 count++;
    //           }
    //       }
           
           
    //   }
    //   count = count%mod;
       
    //   return count;
       
       
       
    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends