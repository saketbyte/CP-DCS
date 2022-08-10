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

int rev(int x)
{
    int ans = 0;

    while(x!=0)
    {
        ans = ans*10;
        ans += x%10;
        
        x/=10;
    }

    return ans;
}

int solve()
{

    int n;

    cin>>n;
    int ans = 0;
    int sum = 0;
    int temp =n;
    if(n<10)
    cout<<n<<endl;

    else
    {
        int x = 9;
         bool flag =true;
    while(sum!=temp)
    {
        if(n>=10)
        {
            ans = ans*10 + x;
            sum = sum+x;
            n=n-x;
            x--;

            
        }
        else 
        {
            // if(flag){
                x = min(x,n);
            //    flag = false;}

            ans = ans * 10 +x;
            sum = sum + x;
            n =temp-sum;
            x--;
            
        }
      

    }

    cout<<rev(ans)<<endl;
    }
    
    

    return 0;
}

int main() {
    
    int t;
    cin>>t;

    while(t--) {solve();}

    return 0;
}
