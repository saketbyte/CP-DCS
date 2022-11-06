class Solution {
  
public:
    
    
   int dp[31];
    int fib(int n) {
        if (n < 2) return n;
        if (dp[n] != 0) return dp[n];                  //Finding in dp table
        dp[n] = fib(n - 1) + fib(n - 2);               //Storing in dp table
        return dp[n];
    }
};