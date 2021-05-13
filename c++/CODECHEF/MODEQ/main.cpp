#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,m;

        cin>>n>>m;
        cout<<endl;

        long long ans = 0;

        vector <long long> mod(n+1,1);

        for(long long i =2;i<=n;i++)
        {
            long long a  = m%i;

            ans = ans + mod[a];
            cout<<" a = m%i = "<<a<<" ans "<<ans<<" mod[a] "<<mod[a];

            for(long long j = a;j<=n;j = j+i) {
                mod[j]++;
                cout<<"mod[j] "<<mod[j];
            }
            cout<<endl;
        }

        cout<<ans<<endl;
    }

}