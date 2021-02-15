#include<iostream>
//#include<bits/stdc>


using namespace std;

int main()
{
    int t=0,n=0,count=0;
    bool flag = true;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int A[n]={0};
        int B[n]={0};
            int x;
            int y;
            cin>>x;
            cin>>y;

        for(int i=n-1;i>=0;i--) {
            A[i] = x%10;
            x=x/10;
        }

        for(int i=n-1;i>=0;i--) {
            B[i] = y%10;
            y=y/10;
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]!=B[i])
                flag=false;
        }

        int red = 0,blue=0;
        for(int i=0;i<n;i++)
        {

            if(A[i]>B[i])
                red++;
            else
                blue++;


        }


        if(flag)
            cout<<"EQUAL";
        else {
            if (red>blue)
                cout << "RED" << endl;
            else
                cout << "BLUE" << endl;

        }
        count =0;
        flag = true;
        n=0;




    }



}
