#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{

    int t=1;
    cin>>t;

    while(t--)
    {

        int n=0;
        int A[3]={0};

        cin>>n;

            int x = -1;
            for (int i = 0; i < n; i++) {
                cin >> x;
                A[x]++;
            }
            if (A[1] % 2 == 0 && A[1]>0)
                cout << "YES" << endl;
            else
            cout<<"NO"<<endl;
        }
            }

            // unsolved