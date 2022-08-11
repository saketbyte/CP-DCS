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
    int n, H, M;
    cin>>n>>H>>M;
    int time = 60*H + M;

    vector<int> h(n,0);
    vector<int> m(n,0);

   for(int i =0;i<n;i++)
    {

        cin>>h[i];
        cin>>m[i];
    }


    int ans  = INT_MAX ;
    for(int i =0;i<n;i++)
    {
        int curr = 60*h[i] + m[i] - time;
        if(curr<0)
            curr+=1440;
        
        ans = min(ans, curr);
        
    }

    cout<<ans/60<<" "<<ans%60<<endl;

    


    return 0;
}

int main() {
    
    int t;
    cin>>t;

    while(t--) {solve();}

    return 0;
}
