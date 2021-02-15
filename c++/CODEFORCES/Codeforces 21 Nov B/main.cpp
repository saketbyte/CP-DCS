#include <string.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {


    int t=0,n=0,l=0,u=0,q=0,c=0;
    string s1;
    string s2;
    bool flag=true;
    cin>>t;

    while(t--)
    {
        cin>>n>>q;
        cin.ignore();
        getline(cin,s1);

        while(q--)
        {
            cin>>l>>u;

            s2=s1.substr(l-1,u-l+1);
            int len = u-l+1;
            int A[len];
            for(int k=0;k<len;k++)
                A[k]=-1;


            for(int i=0;i<len;i++)
            {
                for(int j=c;j<n;j++)
                {
                    if(s2[i]==s1[j])
                    {
                        if(i==0)
                        {
                            A[c] = j;
                            c=1;

                            break;
                        }
                        if(i>0 && j>A[c-1]+1)
                        {
                            A[c] = j;

                            c++;

                            break;
                        }
                    }

                }

            }
           // for(int i=0;i<u-l+1;i++)
         //       cout<<A[i];



            for(int i=0;i<u-l+1;i++)
                if(A[i]==-1)
                {
                    flag = false;
                    break;
                }

                if(flag)
                    cout<<"YES";
                else
                    cout<<"NO";
                cout<<endl;
                flag =true;
                c=0;


        }






    }
    return 0;
}
