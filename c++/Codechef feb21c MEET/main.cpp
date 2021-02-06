#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int timeconvert(string P)
{
    string x = P.substr(0,2);
    x = x + P.substr(3,2);
    int X = stoi(x);
    if(P[6] =='A' && P[1]=='2' && P[0]=='1')
        X = X - 1200;
    else
    if(P[6] =='P' && P[1] == '2' && P[0]=='1')
        X=X+0;
    else
    if(P[6] !='A')
        X = X + 1200;

    return X;

}



int main()
{
    int T;

    cin>>T;
    cin.ignore();

    while(T--)
    {
        int n =0;
        string P;
        getline(cin, P);
       int X = timeconvert(P);
      // cout<<"X is"<<X<<endl;
        cin>>n;
       cin.ignore();

        string t[n];

        for(int i = 0;i<n;i++)
            getline(cin, t[i]);

        for(int i = 0; i<n; i++)
        {
            string beg = t[i].substr(0,8);
            string ed = t[i].substr(9,8);

            int B = timeconvert(beg);
            int E = timeconvert(ed);


            if(B<=X && X<=E)
                cout<<1;
            else
                cout<<0;


        }
        cout<<endl;




    }
}