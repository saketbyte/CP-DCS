#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

    int t=0,n,c0=0,c1=0,x=0,cost=0,h=0,ic=0,nc=0,it=0;

    cin>>t;

    while(t--)
    {
        cin>>n>>c0>>c1>>h;
        string S;
        cin>>S;

        for(int i=0;i<n;i++)
        {
            if(S[i]=='0')
                x++;
        }

        ic= (x*c0)+(n-x)*c1;

        if(n==0)
            cost=0;
        else {
            if (c0 > c1 && h < c0)
                while (nc <= ic && it <= x) {
                    cost = (it * h) + ((x - it) * c0) + (n - x + it) * c1;
                    nc = cost;
                    it = it + 1;
                }
            else if (c0 < c1 && h < c1)
                while (nc <= ic && it <= n - x) {

                    cost = (it * h) + ((x + it) * c0) + (n - x - it) * c1;
                    nc = cost;
                    it = it + 1;
                }
            else
                cost = ic;

            cout << cost << endl;

            n = 0, c0 = 0, c1 = 0, x = 0, cost = 0, h = 0, ic = 0, nc = 0, it = 0;
        }
    }
    return 0;
}