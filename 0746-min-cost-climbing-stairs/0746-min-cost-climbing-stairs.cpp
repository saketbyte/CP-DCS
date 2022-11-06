class Solution {
public:   
	int solve(vector <int> &cost, vector<int> &dp, int i)
    {
        
        if(i >= size(cost)) return 0;
        
	if(dp[i]) return dp[i]; 
        // if already calculated, directly return stored minimum cost
	return dp[i] = 
        cost[i] + min(solve(cost, dp, i + 1), solve(cost, dp, i + 2));
        
        
    }

    int minCostClimbingStairs(vector<int>&cost) {
        
        vector<int> dp(cost.size(), 0);
        
        return min(solve(cost, dp, 0), solve(cost, dp, 1));
        
    // for(int i=2;i<cost.size();i++)
    //     {
    //         cost[i]+=min(cost[i-1],cost[i-2]);
    //     }
    //     return min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};