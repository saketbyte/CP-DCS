#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {

    int t=0,x;

    cin>>t;
    while(t--)
    {
        cin>>x;
        int sum=0;
        int i =1;
        while(sum<x)
        {
            sum = sum +i;
            i++;
        }
       // cout<<"sum"<<sum<<" x"<<x<<"i"<<i<<endl;
        if(sum == x)
            cout<<i-1<<endl;
        else
        {
            if(sum-x==1)
                cout<<i<<endl;
            else
                if(sum-x>=1)
                    cout<<i-1<<endl;
        }

    }
    return 0;
}
//solved