#include <iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int findCons(int A[], int N)
{

    int m = INT_MIN;
    int n = 0;
    int ans=0;
    int h[100001]={0};

    for(int i =0;i<N;i++)
    {
        h[A[i]]=1;
        if(A[i]>m)
            m = A[i];
    }

    for(int i =0;i<=m;i++)
    {
        if(h[i]==1)
            n++;

        if(n>0 && h[i]==0)
        { ans = max(ans,n);
            n =0;
        }
        else
            ans = max(ans,n);

    }
    return ans;
}
//used simple hashing, just hashed the contents and checked what is the maximum continious series of one-s.
int main() {
    int A[] = {1,2,3,4,5};
    int N = 5;

    cout<< findCons(A , N);

}
