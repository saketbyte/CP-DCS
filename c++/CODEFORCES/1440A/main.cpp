#include<iostream>
#include<bits/stdc++.h>


using namespace std;
int main()
{


    int n,c1,c0,h,t;
    string s="";


    cin>>t;
    while(t--) {
        int cost =0;
        cin>>n>>c0>>c1>>h;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0')
            {
                cost = cost + min(c0,c1+h);
            } else
            {
                cost = cost + min(c1,c0+h);
            }

        }

        cout<<cost<<endl;


    }
}
