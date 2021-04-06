#include<bits/stdc++.h>
#include<unistd.h>

using namespace std;

typedef long long int ll;


void fastio()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}



int32_t main()
{

  //  fastio();
    ll n,k,m;

    ll tst=0;
    cin>>tst;
    while(tst--)
    {

        cin>>n>>m>>k;
        ll count =0;

        ll M[n+1][m+1];
        memset(M,0,sizeof(M));

        for (ll i = 1; i <=n; i++)
            for (ll j = 1; j <=m; j++)
                cin>>M[i][j];


        for(ll j =1;j<=m;j++)
            for(ll i =1; i<=n;i++)
                M[i][j] = M[i][j] + M[i-1][j];
        for(ll i =1;i<=n;i++)
            for(ll j =1;j<=m;j++)
                M[i][j] =  M[i][j]+M[i][j-1] ;





        for(ll window =1; window<=n;window++)
        {
            for(ll i =1;i<=n-window+1;i++)
            {
                ll low =1;
                ll high = m-window+1;

                ll mid;
                ll p;
                ll flag = 0;
                while(low<=high)
                {
                    mid = (low+high)/2;

                    ll sum = M[i+window-1][mid+window-1]-M[i+window-1][mid-1]-M[i-1][mid+window-1]+M[i-1][mid-1];
                        sum = sum/(window*window);
                    if(sum>=k)
                    {
                        //cout<<"sum"<<sum/(window*window);
                        high = mid-1;
                        p=mid;
                        flag =1;

                    }
                    else
                    {
                        low = mid+1;
                    }


                }
                if(flag == 1)
                {
                    count += (m-p-window+2);

                }
            }

        }

        cout<<count<<endl;
    }
}