#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int t=0;

    cin>>t;


    int n,Q,l,r;


    while(t--)
    {
        cin>>n>>Q;
        string S;
        cin>>S;

        while(Q--)
        {
            cin>>l>>r;
            bool flag =false;

            string q = S.substr(l-1,r-l+1);
            //cout<<q<<endl;
            char x= q[0];
            char y= q[q.length()-1];
            if(r-l>=1) {
                for (int i = r; i < n; i++) {
                    if (S[i] == y) {
                        flag = true;
                        break;
                    }
                }
                if(!flag)
                {
                    for (int i = 0; i < l-1; i++) {
                        if (S[i] == x) {
                            flag = true;
                            break;
                        }
                    }
                }
                if(flag)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;

            } else
                cout<<"NO"<<endl;










         }



    }
}
//solved