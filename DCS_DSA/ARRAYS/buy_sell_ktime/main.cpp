#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main() {

    int n,k;
    cin>>n>>k;

    int P[n];

    for(int i =0;i<n;i++)
        cin>>P[i];

    int dp[k+1][n]={0}; //very important to initialise !



    for(int transaction =1;transaction<=k;transaction++)
    {
        for(int day = 1;day<n;day++)
        {
            //dp[transaction][day] = dp[transaction][day-1];
            int max = dp[transaction][day-1];

            for(int prevday =0; prevday <day;prevday++)
            {
                int prev_profit = dp[transaction-1][prevday];
                int curr_profit = P[day]-P[prevday];

                if(prev_profit+curr_profit > max)
                    max = prev_profit + curr_profit;
            }

            dp[transaction][day] = max;
        }
    }

    cout<<dp[k][n-1];

}
