#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{

    int t;

    cin>>t;

    while(t--)
    {   int n=0;
        int x=0;
        cin>>n;
        int hl[n] = {0};
        for(int i=0;i<n;i++)
        {
            cin>>x;
            hl[x]++;
        }
       // for(int i = 0 ;i < n ;i++)
          //  cout<<hl[i];
         //   cout<<endl;

        bool flag =false;

        for(int i = 0 ;i < n ;i++)
        {
            if(hl[i]==1)
            {
                cout<<i+1<<endl;
                flag = true;
                break;
            }

        }
        if(flag == false)
            cout<<-1<<endl;
    }

    return 0;
}

