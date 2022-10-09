class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min_so_far = INT_MAX;
        
        int max_profit = INT_MIN;
        
        for(int i =0;i<prices.size();i++)
        {
            min_so_far = min(prices[i], min_so_far);
            max_profit = max(max_profit, prices[i]-min_so_far);
        }
        
        return max_profit;
        
        
    }
};