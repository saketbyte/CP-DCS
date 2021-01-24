#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{

    int t=0;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int hl[n+1]={0};
        int index[n+1]={0};

        for(int i =0; i <n; i++)
        {
            int x;
            cin>>x;
            hl[x]++;
           if(hl[x]==1)
            index[x]=i+1;
        }

        int ans=-1;
        for( int i =0;i<=n;i++)
        {
            if(hl[i]==1)
            {
                ans = index[i];
                break;
            }
        }
        cout<<ans<<endl;


    }







}