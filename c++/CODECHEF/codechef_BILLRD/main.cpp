#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve(int n,int k, int x,int y)
{
    int A[8]={0};
    bool f = true;
    if(x==0&&y==0)
    {
        cout<<x<<" "<<y<<endl;
        f=false;

    }
    else if(x==n&&y==n||x==y)
    {
        cout<<n<<" "<<n<<endl;
        f=false;
    }
    else if((x==0&&y==n)||(x==n&&y==0))
    {
        cout<<x<<" "<<y<<endl;
        f=false;
    }
    else {
        if (x > y) {
            A[0] = n;
            A[1] = y + n - x;
            A[2] = A[1];
            A[3] = n;
            A[4] = 0;
            A[5] = x - y;
            A[6] = A[5];
            A[7] = 0;
        } else if (x < y) {
            A[0] = x + n - y;
            A[1] = n;
            A[2] = n;
            A[3] = x + n - y;
            A[4] = y - x;
            A[5] = 0;
            A[6] = 0;
            A[7] = y - x;
        } //else
          //  cout << n << " " << n << endl;
    }



    int ans=k%4;
if(f) {
    if (ans == 0)
        cout << A[6] << " " << A[7] << endl;
    if (ans == 1)
        cout << A[0] << " " << A[1] << endl;
    if (ans == 2)
        cout << A[2] << " " << A[3] << endl;
    if (ans == 3)
        cout << A[4] << " " << A[5] << endl;
}
}


int main()
{

    int t=1;


    cin>>t;
    while(t--)
    {
        int n, k,x, y;
        cin>>n>>k>>x>>y;
        solve(n,k,x,y);

    }
}




/*
 * void solve(int n,int k, int x,int y)
{
    int cx=1,cy=1;
    if(y>=n)
    {
        cy=-cy;
    }
    if(x>=n)
    {
        cx=-cx;
    }
    while(k>=0)
    {

        if((x==0&&y==0)||(x==0&&y==n)||(x==n&&y==0)||(x==n&&y==n))
            break;

        x=x+cx;
        y=y+cy;

        if(y<=0||y>=n)
        {
            cy=-cy;
            k=k-1;

        }
        if(x<=0||x>=n)
        {
            cx=-cx;
            k=k-1;

        }

    }
    cout<<x<<" "<<y<<endl;
}

 */