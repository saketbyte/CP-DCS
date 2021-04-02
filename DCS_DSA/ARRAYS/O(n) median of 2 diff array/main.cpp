#include<iostream>
#include<bits/stdc++.h>

//for better solution read this article thoroughly - https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/
using namespace std;



void solve(int A[], int B[], int m,int n)
{

    int i =0,j=0;
    vector <int> C;


    while(i<m && j<n)
    {
        if(A[i]<B[j]) {
            C.push_back(A[i]);
            i++;
        }

        else
        {
            C.push_back(B[j]);
            j++;
        }
    }

    while(i<m)
    {
        C.push_back(A[i]);
        i++;
    }

    while(j<n)
    {
        C.push_back(B[j]);
        j++;
    }



    if((m+n)/2 == 0)
        cout<<C[(m+n/2)]<<" "<<C[(m+n+2)/2]<<endl;
    else
        cout<<C[(m+n)/2]<<endl;
}




int main()
{
    int m,n;
    cin>>m>>n;

    int A[n]={0};
    int B[n]={0};

    for(int i =0;i<m;i++)
        cin>>A[i];

    for(int i =0;i<n;i++)
        cin>>B[i];

    solve(A,B,m,n);

}