#include <iostream>
#include<bits/stdc++.h>


using namespace std;
/*
 * This developed my concepts of dynamic programming a little bit. I had learnt this in NPTEL too but it was good to see the application of what I studied. I could not do it on my own.
 *
 * So here we prepare a double dimensional array called dp which will have:
 * rows--> best profit made upto a column_number day by making nth transaction
 * columns--> representing the best profit made by using row_number of transactions
 *
 *                          ith day     ___     ___     ___
 *          jth_transaction
 *          0                           0       0       0
 *          1                           v11     v12     v13
 *          2
 *          .
 *          .
 *          k
 *
 *
 *
 *          Now any (i,j) element in the above matrix represents the best profit made uptill ith day using j transactions.
 *          The (i,j) result will depend upon the (i-1,j) cell and all the cell of j-1 column before i ie in j-1 all behind i.
 *          So we compare the buying and selling point of the above and check for the best profit made till today.
 *          I will improve the comments later. TIred rn.
 */

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
