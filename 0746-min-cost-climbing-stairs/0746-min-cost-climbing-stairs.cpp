class Solution {
public:  
    
    
// 	int solve(vector <int> &cost, vector<int> &dp, int i)
//     {
      
//         if (i < 0) return 0;
// 	if (i==0 || i==1) return cost[i];
        
        
// 	if(dp[i]) return dp[i]; 
        
// 	return dp[i] = 
//         cost[i] + min(solve(cost, dp, i -2), solve(cost, dp, i -1));
        
//     }

    int minCostClimbingStairs(vector<int>&cost) {
        
        vector<int> dp(cost.size(), 0);
        
//         return min(solve(cost, dp, cost.size()-1), solve(cost, dp, cost.size()-2));
        
    for(int i=2;i<cost.size();i++)
        {
            cost[i]+=min(cost[i-1],cost[i-2]);
        }
        return min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};