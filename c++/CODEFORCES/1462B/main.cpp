#include<iostream>
#include<bits/stdc++.h>
#include<String>
using namespace std;
int main()
{
    int t=0,n;
    string S;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>S;
        bool flag = false;
        for(int i=0;i<=4;i++)
        {

            string S1 = S.substr(0,i);
            string S2 = S.substr(n-4+i,4-i);
           /* cout<<"      i       "<<i<<endl;
            cout<<"S1 "<<S1<<endl;
            cout<<"S2 "<<S2<<endl;*/
            if(S1+S2=="2020") {
                flag = true;
                break;
            }
            else
                flag=false;
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;






    }


}

//solved