#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long A[n] = {0};

        for(long long  i=0;i<n;i++)
            cin>>A[i];
        sort(A,A+n)	;
        long long  wins=0;


        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(A[i]!=A[j])
                {
                    wins = wins+1;

                }
            }
            break;

        }

        cout<<wins<<endl;
    }
}