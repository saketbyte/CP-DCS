#include<bits/stdc++.h>

using namespace std;
// The problem statement is very simple, it does not even require us to sort the array
// I just checked that if for any singer i the range of vocal singing is inclusive of other
//singers and just scored them if so else nothing.



int main()
{
    int n;
    cin>>n;
    int L[n],U[n];

    for(int i = 0;i<n;i++)
        cin>>L[i]>>U[i];
    int score[n];
    for(int i =0;i<n;i++)
    {
        score[i] =0;
        int l = L[i];
        int u = U[i];

        for(int j =0;j<n;j++)
        {
            if(l<L[j]&& u>U[j])
                score[i]=score[i]+2;
        }
    }

    for(int i =0;i<n;i++)
    {
        cout<<score[i]<<" ";

    }
    cout<<endl;






}