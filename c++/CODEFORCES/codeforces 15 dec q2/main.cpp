#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{


    int t=0,n=0,C=45,sum=0;


    cin>>t;
    while(t--)
    {
        cin>>n;
        int A[9]={0};
        if(n>C)
            cout<<-1<<endl;
        else
        {
            if(n<10)
                cout<<n<<endl;
            else
            {
                for(int i = 9; i>0; i--)
                {   cout<<i<<endl;
                    if(n-i>0)
                    {
                        cout<<"entered"<<endl;
                        A[i] = i;
                        n=n-i;
                        cout<<"n"<<n<<endl;
                        cout<<A[i];
                    }
                    else if(n-i<=0)
                        {

                        A[i] = n;
                        cout<<A[i];
                        break;

                    }



                }
                for(int i=0;i<9;i++)
                    if(A[i]!=0)
                        cout<<A[i];
                cout<<endl;


            }
        }

    }
    return 0;
}