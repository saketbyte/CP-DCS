#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

    int t=0,n=0;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int A[n]={0};

        for(int i=0;i<n;i++)
            cin>>A[i];

        for(auto i=0, j= n - 1; i < n / 2, j >=n / 2; i++,j--)
        {

            cout<<A[i]<<" ";
            if(i!=j)
            cout<<A[j]<<" ";


        }
        cout<<endl;




    }
    return 0;
}
