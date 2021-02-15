#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0,a,b,c;
    cin>>t;

    while(t--)
    {

        cin>>a>>b>>c;
        int sum =  a+b+c;

        if(sum%9!=0)
            cout<<"NO"<<endl;
        else
            if(min(a,(min(b,c)))>=sum/9)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;

    }
}

//solved