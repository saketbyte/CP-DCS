#include<iostream>
#include<bits/stdc++.h>

// my own appraoch, here can be wrong because I dont have many test cases to check.
// test cases used - 1 3 5 8 9 2 6 7 6 8 9 ; 1 4 3 2 6 7; 1 3 6 1 0 9; 1 3 6 3 2 3 6 8 9 5
// All from gfg page and my programe gave correct answer... but I fear lol.



using namespace std;


int question(int A[], int n) {
    int curr = 0;
    int maxR ;
    int count = 0;
    int* jump;
    int* beg = A;


    while (curr < n) {
        if(A[curr]==0)
            return -1;


            maxR = A[curr];
            if (curr + maxR < n-1) {


                jump = max_element(A + curr + 1, A + curr + maxR + 1);

                 curr = jump-beg;

                count++;
               // cout<<"curr"<<curr<<" maxR"<<maxR<<" count"<<count<<" new maxR"<<A[curr]<<endl;
            } else {
                count ++;
                break;
            }
        }


    return count;
}


int main()
{
    int n;
    cin>>n;
    int A[n];

    for(int i =0;i<n;i++)
        cin>>A[i];
    cout<<question(A,n);
}