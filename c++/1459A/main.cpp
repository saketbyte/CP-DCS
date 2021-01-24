#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int t=0,n=0;


    cin>>t;

    while(t--)
    {
        cin>>n;

        string x,y;
        cin>>x>>y;
        int count=0;

            for(int i = 0;i<n;i++)
            {
                if(x[i]>y[i])
                    count++;
                else if (x[i]<y[i])
                    count--;
                else
                    continue;
            }

        if(count>0)
            cout<<"RED"<<endl;
        else if(count<0)
            cout<<"BLUE"<<endl;
        else
            cout<<"EQUAL"<<endl;
        }


    return 0;
}
