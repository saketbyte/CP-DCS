#include<iostream>
#include<bits/stdc++.h>


using namespace std;


int main()
{
    int t=1;
    cin>>t;

    int N;
    string S;

    while(t--)
    {
        cin>>N;
        cin>>S;
        int i=0;

        while(i<N){
            string c = S.substr(i,4);
            reverse(c.begin(), c.end());
            int letter=0;
            for(int j =0;j<4;j++)
            {
                i++;
                letter=letter+ pow(2,j)*((int)c[j]-48);
            }
            cout<<(char)(97+letter);

        }
        cout<<endl;

    }
}