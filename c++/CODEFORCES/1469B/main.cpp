#include<iostream>
//unsolved
#include<bits/stdc++.h>



using namespace std;
int main()
{

    int t=1;
    cin>>t;

    int n,m;


    while(t--)
    {

        cin>>n;
        int r[n]={0};
        for(int i =0; i<n ; i++)
        {
            cin>>r[i];
        }
        cin>>m;
        int b[m]={0};
        for(int i =0; i<m ; i++)
        {
            cin>>b[i];
        }

        cout<<endl;

        int a[m+n]={0};

        int x=0,y=0,i=0;
        int l =min(m,n);


        int p=0;
        while(p<l)
        {

            if(r[x]>b[y])
            {
                a[p]=r[x];
                p++;
                x++;
            }
            else if(r[x]<b[y] && y<m)
            {
                a[p]=b[y];
                p++;
                y++;
            }
            else
            {
                a[p]=b[y];
                a[p+1]=a[x];
                p=p+2;
                x++;
                y++;
            }
        }

        int k= max(m,n);
        if(x==l-1)
        {
            for(int i =l; i<k;i++)
            {
                a[i]=b[i];
            }
        }
        else
        for(int i =l; i<k;i++)
          a[i]=r[i];

        for(int i =0; i<m+n;i++)
            cout<<a[i];


    }

}

/*

        while(x<n || y<m)
        {

            if(r[x]>b[y] && x<n)
            {
                a[i]=r[x];
                i++;
                x++;
            }
            else if(r[x]<b[y] && y<m)
            {
                a[i]=b[y];
                i++;
                y++;
            }
            else
            {
                a[i]=b[y];
                a[i+1]=a[x];
                i=i+2;
                x++;
                y++;
            }

        }

        for(int i=0;i<m+n;i++)
            cout<<a[i];
            */