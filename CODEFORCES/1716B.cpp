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


void solve(){

    int n;
    cin>>n;
    cout<<n<<" "<<endl;
    vec a;

    for(int i = 0;i <n;i++) 
     {
        a.pb(i+1);
        cout<<i+1<<" ";
     }
     cout<<endl;
     

     int i =0;
     int j =n-1;

     while(i<j) {

        swap(a[i],a[j]);

        i++;
     for(int i = 0;i <n;i++) 
     {
        cout<<a[i]<<" ";
     }
     cout<<endl;

     }



}

int main() {
    
   int t;
   cin>>t;

   while(t--) {solve();}

    return 0;
}
