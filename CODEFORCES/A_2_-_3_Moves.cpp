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
    long long int n;
    cin>>n;
    n = abs(n);
    long long int steps = 0;
    steps = n/3;

    if(n==2||n==3)
    cout<<1<<endl;
    else
    if(n==1)
        cout<<2<<endl;
    else{
        if(n%3!=0)
        steps = steps+1;
    
    cout<<steps<<endl;
    }
    return 0;
}

int main() {
    
    int t;
    cin>>t;

    while(t--) {solve();}

    return 0;
}
