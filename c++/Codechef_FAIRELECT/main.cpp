#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int total(int a[],int x)
{
    int sum=0;
    for(int i =0;i<x;i++)
        sum = sum + a[i];
    return sum;
}
int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int A[n]={0};
        int B[m]={0};

        int john=0,jack=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            john=john+A[i];
        }

        for(int i=0;i<m;i++) {
            cin >> B[i];
            jack = jack+B[i];
        }

        sort(A,A+n);
        sort(B,B+m,greater<int>());
        int k=0;
        //int d = jack-john;
        int di=0;
        int count=0;
        if(john>jack)
            cout<<0<<endl;
        else {
            while (jack>=john && k < min(n, m)) {
                di = B[0] - A[0];
                if (di > 0) {

                    count++;
                    int temp = A[0];
                    A[0] = B[0];
                    B[0] = temp;
                   sort(A,A+n);
                   sort(B,B+m,greater<int>());
                    john = total(A,n);
                    jack = total(B,m);
                    k = k + 1;
                } else
                    break;

            }
            //d = jack - john;

            //cout<<john<<"    "<<jack<<endl;
            if (jack>=john)
                cout << -1 << endl;
            else
                cout << count << endl;
        }

    }
}