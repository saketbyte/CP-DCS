#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

    int t=0, n=0,x=0;


    cin>>t;
    while(t--)
    {

        cin>>n>>x;

        int A[n]={0};
        int B[n]={0};

        for(int i =0; i<n;i++)
            cin>>A[i];
        for(int i =0; i<n;i++)
            cin>>B[i];

        sort(B, B + n, greater<int>());

        string ans="YES";
        for(int i =0; i<n;i++)
        {
            if(A[i]+B[i]>x)
                ans="NO";
        }

        cout<<ans<<endl;


    }

    return 0;
}
