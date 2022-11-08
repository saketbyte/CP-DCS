class Solution {
public:
    int maxProfit(vector<int>& A) {
        
        int ans = 0;
        int buy = A[0];
        
        for(int i =1;i<A.size();i++)
        {
            ans = max(ans, A[i]-buy);
            buy = min(buy, A[i]);
        }
        
        return ans;
       
        
        
    }
};