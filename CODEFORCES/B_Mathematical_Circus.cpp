#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define F(i, a, b)        for(int i = a; i<b;i++)
#define w(x)            int x; cin>>x; while(x--)
#define ll              unsigned long long int
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vec              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >



void fastio() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int solve()
{
    ll num,k;
    cin>>num>>k;

    if(k%4==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else{

        if(k%4==1 )
        {
            cout<<"YES"<<endl;
            for(ll x =1;x<num;x+=2)
            cout<<x<<' '<<x+1<<endl;
            
        }

         if(k%4==2)
        {
            cout<<"YES"<<endl;

            for(ll x = 1 ;x<num; x+=2)
            {
                if(x%4==1)
                    cout<<x+1<<' '<<x<<endl;
                else
                    cout<<x<<' '<<x+1<<endl;

            }
        }
        
        if(k%4==3)
        {
            cout<<"YES"<<endl;
            for(ll x =1;x<num;x+=2)
            cout<<x<<' '<<x+1<<endl;
            
        }
    }



        
}

int main() {
    
    int t;
    cin>>t;

    while(t--) {solve();}

    return 0;
}
