#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void display(vector <int> S)
{
    for(auto i = S.begin(); i != S.end();i++)
        cout<<*i<<" ";
}

// This solution contains brute force appraoch of count sort using hashing. It has O(2N) time complecity.

void question(vector <int> A, int n)
{
    vector <int> hash(3,0);

    for(auto i = A.begin(); i!= A.end(); i++)
    {
        if(*i==0)
            hash[0]++;

        if(*i==1)
            hash[1]++;

        if(*i==2)
            hash[2]++;

    }

    for(int i = 0;i<hash[0];i++)
        A[i]=0;

    for(int i = hash[0];i<hash[0]+hash[1];i++)
        A[i]=1;

    for(int i = hash[0]+hash[1];i<hash[0]+hash[1]+hash[1];i++)
        A[i]=2;

    display(A);
}

int main()
{
    int n=0;
    cin>>n;
    vector <int> A;
    int input;
    for(int i = 0;i<n;i++)
    {
        cin>>input;
        A.push_back(input);
    }


    question(A,n);

}

