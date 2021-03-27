#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
        cin >> A[i];

    //forward pass

    int curr_maxfp;
    int minsf = A[0];
    int fwd[n];
    fwd[0]=0;
    for (int i = 1; i < n; i++)
    {
        if(A[i]<minsf)
            minsf = A[i];

        curr_maxfp = A[i]-minsf;

        if(curr_maxfp > fwd[i-1])
            fwd[i] = curr_maxfp;
        else
            fwd[i] = fwd[i-1];
    }


// backward pass
    int curr_maxbp = 0 ;
    int maxsf = A[n-1];
    int bwd[n];
    bwd[n-1] = 0;

    for (int i = n-2; i>=0; i--)
    {
        if(A[i]>maxsf)
            maxsf = A[i];
        curr_maxbp = maxsf-A[i];

        if(curr_maxbp > bwd[i+1])
            bwd[i] = curr_maxbp;
        else
            bwd[i] = bwd[i+1];
    }

    int net = 0;
    for(int i =0;i<n;i++)
    {
        cout<<"fwd"<<fwd[i]<<"bwd"<<bwd[i]<<endl;
    }

    for(int i =0;i<n;i++)
    {
        if(fwd[i]+bwd[i]>net)
            net = fwd[i]+bwd[i];
    }

    cout<<net<<endl;

}