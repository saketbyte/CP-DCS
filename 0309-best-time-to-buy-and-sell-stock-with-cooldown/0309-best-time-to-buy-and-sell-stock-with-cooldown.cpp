class Solution {
public:
    
//     int getAns(vector<int> Arr, int ind, int buy, int n, vector<vector<int>> &dp ){

//     if(ind>=n) return 0; //base case
    
//     if(dp[ind][buy]!=-1)
//         return dp[ind][buy];
        
//     int profit;
    
//     if(buy==0){// We can buy the stock
//         profit = max(0+getAns(Arr,ind+1,0,n,dp), -Arr[ind]+getAns(Arr,ind+1,1,n,dp));
//     }
    
//     if(buy==1){// We can sell the stock
//         profit = max(0+getAns(Arr,ind+1,1,n,dp), 
//                      Arr[ind]+getAns(Arr,ind+2,0,n,dp));// minor change
//     }
    
//     return dp[ind][buy] = profit;
// }
    
    int maxProfit(vector<int>& Arr) {
        
        int n = Arr.size();
    vector<vector<int>> dp(n+2,vector<int>(2,0));
    
    for(int ind = n-1; ind>=0; ind--){
        for(int buy=0; buy<=1; buy++){
            int profit;
            
            if(buy==0){// We can buy the stock
                profit = max(0+dp[ind+1][0], -Arr[ind] + dp[ind+1][1]);
            }
    
            if(buy==1){// We can sell the stock
                profit = max(0+dp[ind+1][1], Arr[ind] + dp[ind+2][0]);
            }
            
            dp[ind][buy] = profit;
        }
    }
    
    return dp[0][0];
        
    }
};