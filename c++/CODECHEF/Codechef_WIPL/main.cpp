#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void solve(int n,int k, int A[])
{
    int sum1=0,sum2=0;

    int i=0;
    int count =0;
    if(k<=2*accumulate(A, A+n,0)) {
        sort(A, A + n, greater<int>());
        for (i = 0; i < n; i++) {
            if (sum1 <= k) {
                sum1 = sum1 + A[i];
                count++;
                if (sum2 <= k)
                    i++;

            }
            if (sum2 <= k) {
                sum2 = sum2 + A[i];
                count++;
            }
        }
    }
    else
    {
        cout<<-1<<endl;}

   // cout<<"t1 "<<sum1<<endl;
  //  cout<<"t2 "<<sum2<<endl;
    if(k<=accumulate(A, A+n,0))
    cout<<count<<endl;

}

int main()
{
    int t=0;

    cin>>t;
    while(t--)
    {
        int n=0,k=0;

        cin>>n>>k;

        int A[n]={0};
        for(int i =0;i<n;i++)
            cin>>A[i];

        solve(n,k,A);
    }
}