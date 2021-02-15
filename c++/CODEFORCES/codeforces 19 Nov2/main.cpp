#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

    int t=0,count=0;
    char a=' ',b=' ';
    cin>>t;
    cin.ignore();
    string S=" ";
    while(t--)
    {
        getline(cin,S);

        for(int i =0;i<S.length();i++)
        {
            a=S[i];
            if(a=='('||a=='[')
            {
                for(int j=i+1;j<S.length();j++)
                {
                    b=S[j];
                    if(a=='['&&b==']')
                    {
                        count++;
                        S[j]=' ';

                    }
                    else if(a=='('&& b==')')
                    {
                        count++;
                        S[j]=' ';
                    }
                    else
                        continue;
                }
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}
