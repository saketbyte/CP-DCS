#include<iostream>
#include<bits/stdc++.h>


using namespace std;


int main()
{
    long long t=1;
    cin>>t;
    long long N,K,D;
    while(t--)
    {
        cin>>N>>K>>D;
       long long sum=0;
       long long x;
        for(long long i =0;i<N;i++) {
            cin >> x;
            sum=sum+x;
        }

      long long d = sum/K;
        long long ans = d < D ? d : D;

      cout<<ans<<endl;

    }




}