#include<iostream>

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t=1;

    cin>>t;


    while(t--)
    {
        int w=0,h=0,n=0;
        int count = 1;
        cin>>w>>h>>n;

       // cout<<"W"<<w<<"H"<<h<<endl;

        while(w%2==0) {
            count=count*2;
            //cout<<w<<endl;
            w=w/2;
        }
        while(h%2==0) {
          //  cout<<h<<endl;
            count=count*2;
            h = h / 2;

        }
      //  cout<<count<<endl;

        if(count>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}