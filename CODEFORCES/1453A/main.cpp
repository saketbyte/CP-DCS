#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t=0;

    cin>>t;
    int n=0,m=0;


    while(t--)
    {

        cin>>n>>m;
        int x=0;
        int C[200]={-1};
        int count=0;

        for(int i =0 ;i<n;i++)
        {
            cin>>x;
            C[x]=1;
        //    cout<<"@";
        }
      //  cout<<endl;
        for(int i =0 ;i<m;i++)
        {
        //    cout<<"#";
            cin>>x;
            if(C[x]==1)
                count++;
        }
      //  cout<<endl;
        cout<<count<<endl;
      //  cout<<"?";



    }
    return 0;
}
