#include<bits/stdc++.h>

using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back

#define vi              vector<int>
#define mod             1000000007

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
   // c_p_c();


    int t=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a =2;
        int b = n-1;
        int c = 1;
        while(b)
        {
            if(b%2==1)
                c = a*c%mod;

            a = a *a%mod;
            b =b/2;
        }
        cout<<c<<endl;

        /*for(int i =1;i<n;i++)
            ans = (2*ans)%mod;
        cout<<ans<<"\n";*/

    }

    return 0;
}