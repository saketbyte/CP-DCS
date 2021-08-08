#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


//BUGGY BRUTEFORCE
int main()
{


    int t=0,n=0;
    cin>>t;

    while(t--)
    {

        cin>>n;
        bool f1=false,f2=false,f3=false,f4=false;
        int p1=0,p2=0,p3=0,p4=0;

        string S;
        cin.ignore();
        getline(cin,S);


        for(int i=0;i<n;i++)
        {
            if(S[i]=='2') {
                f1 = true;
                p1=i;

                break;
            }
        }
        for(int i=p1+1;i<n;i++)
        {
            if(S[i]=='0' && f1) {
                f2 = true;
                p2=i;
                break;
            }
        }
        for(int i=p2+1;i<n;i++)
        {
            if(S[i]=='2' && f2) {
                f3 = true;
                p3=i;
                break;
            }
        }
        for(int i=p3+1;i<n;i++)
        {
            if(S[i]=='0' && f3) {
                f4 = true;
                p4=i;
                break;
            }
        }

       /* cout<<"f1p1    f2p2    f3p3    f4p4"<<endl;
        cout<<f1<<p1<<"   "<<f2<<p2<<"   "<<f3<<p3<<"   "<<f4<<p4<<endl;*/
        if(f4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;







    }
    return 0;
}

