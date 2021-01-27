#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[], int n)
{
    int glob_max=INT_MIN;
    int cur_max = A[0];

    for(int i = 1; i<n;i++)
    {
        cur_max = max(A[i], cur_max + A[i]);
        glob_max = max(glob_max, cur_max);
    }

return glob_max;
}

int main() {

    int n ;
    cin>>n;
    int A[n];
    for(int i =0;i<n;i++)
        cin>>A[i];
    cout<<max_sum(A,n);

    return 0;
}
