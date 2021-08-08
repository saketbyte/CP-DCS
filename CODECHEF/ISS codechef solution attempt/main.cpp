
#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];


/*void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}*/

int32_t main()
{
   // c_p_c();

    int N = 10e6;

    int dp1[N],dp2[N];

    for(int i =0;i<N;i++)
    {
        dp1[i]=i;
        dp2[i] = 0;
    }
/*

    for(int i =0;i<45;i++)
    {
        cout<<phi[i]<<" ";
    }
//    cout<<endl;
*/


    for(int p =2; p<N;p++)
    {
        if(dp1[p] == p)
        {
            dp1[p] = p-1;

            for(int i = 2*p; i<N; i = i+p)
            {
                dp1[i] = (dp1[i]/p)*p-1;
            }
        }
    }
/*

    for(int i =0;i<45;i++)
    {
        cout<<phi[i]<<" ";
    }
cout<<endl;
*/


    for(int i =2; i<N;i++)
    {
        dp2[i] +=i-1;

        for(int j = 2*i; i<N; i = i+j)
        {
            dp2[j] += i*((1+dp2[j/i])/2);
        }

    }
/*

    for(int i =0;i<45;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
*/


    int t = 0;
    cin>>t;

    while(t--)
    {
        int k =0;
        cin>>k;

        cout<<dp2[4*k+1]<<endl;
    }

    return 0;
}

