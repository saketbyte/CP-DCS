#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0,n=0,count=0;


    cin>>t;

    while(t--)
    {

        cin>>n;

        if(n==1)
        {
            count=0;


        }
        else if(n==2)
        {
            count = 1;
        }
        else if(n==3)
        {
            count=2;
        }
        else
        if(n%2==0)
        {
            count=count+2;
        }
        else
        {
            count=count+3;
        }

        cout<<count<<endl;
        count=0;
    }




// SUCCESSFUL
}