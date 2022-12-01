
class Solution {
public:
    
  
    
  int solve(vector<int>& coins, vector<vector<int>> &memo, int n, int target)
{
        if(n==0)
        {
            if(target%coins[n]==0)
            {
                return 1;
            }
            return 0;
        }
        if(target==0)
        {
            return 1;
        }
		// Till here, the explanation is same as the recursive solution
        if(memo[n][target]!=-1) // Here comes the role of memoization. Since we initialised the memo grid with -1, if a function call that is made and was stored in the grid is called again, we directly retrieve it
        {
            return memo[n][target];
        }
        int dontpick = solve(coins, memo, n-1, target);
        int pick = 0;
        if(coins[n]<=target)
        {
            pick = solve(coins, memo, n, target-coins[n]);
        }
		// Same explanation of the above 3 steps like recursion
        return memo[n][target] = pick + dontpick; // We store all the calculated values in the memo grid
}
int change(int amount, vector<int>& coins) {
        if(amount==0) // If the amount is 0, then we have one way(to not choose an element at all)
        {
            return 1; // So return 1
        }
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1)); // We create a 2D vector with n rows
		// which denote the coin denominations and amount+1 columns (0 to amount)
		return solve(coins, dp, n-1, amount); // Call the function
}
};