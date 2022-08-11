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
    int n =0;
    cin>>n;
    vector<int> a(n,0);
    set<int> s;
    bool flag = true;
    F(x,0,n)
    {
        cin>>a[x];
    }

    for(int i =n-1;i>=0;i--)
    {
        if(s.count(a[i]))
        {
            cout<<i+1<<endl;
            flag = false;
            break;
        }
        s.insert(a[i]);
    }

if(flag)
cout<<0<<endl;
}

int main() {
    
    int t;
    cin>>t;

    while(t--) {solve();}

    return 0;
}
