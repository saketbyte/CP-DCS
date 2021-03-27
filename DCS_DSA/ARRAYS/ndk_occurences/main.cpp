#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,k;

    cin>>n>>k;

    int A[n];

    for(int i =0;i<n;i++)
        cin>>A[i];


    sort(A,A+n);

    int count =0;

    for(int i =1;i<n;i++)
    {
        if(i==n-1 && count>n/k)
            cout<<A[n-1];
        if(A[i]==A[i-1])
        {
            count++;

        }
        else
        {
            if(count>(n/k))
                cout<<A[i]<<endl;
            count = 0;

        }

    }


}