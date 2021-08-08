#include <iostream>
#include<bits/stdc++.h>

#define For(m,n) for(auto i = m; i < n ;i++)
#define pb push_back



using namespace std;


void question(vector<int> A,int k)
{
    vector<int> x;
    For(0,k)
        x.push_back(A[i]);

        For(A.begin(),A.end()-k)
        {
           *i=*(i+k);
        }

    int c=0;
    For(A.end()-k,A.end())
    {

            *i = x[c];
            c++;
    }

    For(A.begin(),A.end())
        cout<<*i<<endl;
}


int main()
{
    vector<int> A;
    int input;
    int n,k;
    cin>>n>>k;

    For(0,n)
    {
        cin>>input;
        A.pb(input);
    }

    question(A,k);




}