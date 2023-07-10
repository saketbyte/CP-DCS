class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimumPrice = prices[0];
        int maximumProfit = 0;
        
        for(auto i : prices)
        {
            minimumPrice = i<minimumPrice?i:minimumPrice;
            maximumProfit = maximumProfit<(i-minimumPrice)?(i-minimumPrice):maximumProfit;
        }
        
        
        return maximumProfit;
        
    }
};