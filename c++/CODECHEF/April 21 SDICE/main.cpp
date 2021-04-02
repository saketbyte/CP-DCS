#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define F(i,a,b)        for(int i = a; i<b;i++)
#define w(x)            int x; cin>>x; while(x--)
#define ll             long long int
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vec              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >



void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}



int main()
{
    //fastio();
    unsigned long long n;
    unsigned long long sum =0;
    vec A ={44,20,36,51,60};

    w(x)
    {
        cin>>n;


        if(n<=4)
            cout<<A[n]<<"\n";
        else if(n>4 && n<=8)
        {
            sum = 60-(n-4)*4 +A[n-4];
            cout<<sum<<"\n";
        }
        else
        {
            unsigned long long int o = n/4;
            unsigned long long int m=4;
            if(n%4!=0) {
                m = n % 4 + 4;
                sum = (o - 1) * A[0] + 60 - (m - 4) * 4 + A[m - 4];
            }
            else
                sum = (o-1) * A[0] + A[4] ;

            cout<<sum<<"\n";
        }

    }
    return 0;
}
