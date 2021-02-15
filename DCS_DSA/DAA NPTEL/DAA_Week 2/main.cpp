#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{	int N;
    cin>>N;

    int L[N],U[N];
    int R[N];
    for(int i=0;i<N;i++)
    {
        cin>>L[i]>>U[i];
    }

    for(int i=0;i<N;i++)
    {   R[i]=0;
        int x = L[i];
        int y = U[i];

        for(int j=0;j<N;j++)
        {
            if(x<L[j] && y>U[j])
                R[i] = R[i]+2;
        }

    }
    for(int i=0;i<N;i++)
    {
        if(i==N-1)
            cout<<R[i];
        else
            cout<<R[i]<<" ";
    }
    cout<<"\n";
}