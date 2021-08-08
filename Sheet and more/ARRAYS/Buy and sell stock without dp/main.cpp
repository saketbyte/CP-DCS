#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& A) {
        
        
        int n = A.size();
        
        int min=INT_MAX;
        int profit = 0;
        
        for(int i = 0;i<n;i++)
        {
            if(A[i]<min)
                min = A[i];
            else
                if(A[i]-min>profit)
                    profit = A[i]-min;
        }
        
        return profit;
    }
};