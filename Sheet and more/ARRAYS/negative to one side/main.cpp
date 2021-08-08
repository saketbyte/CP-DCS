#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void swap(int A[],int l, int r)
{
    int temp = A[r];
    A[r]=A[l];
    A[l]=temp;
}

void question(int A[],int n)
{
    int left = 0;
    int right = n-1;

    while(left<=right)
    {
        if(A[left]>=0 && A[right]<0) {
            swap(A, left, right);
            left++;
            right--;
        }
        if(A[left]>=0 && A[right]>=0)
        {
            right--;
        }
        if(A[left]<0 && A[right]<0)
        {
            left++;
        }



    }

    for(int i =0;i<n;i++)
        cout<<A[i];
}


int main()
{

    int n;
    cin>>n;
    int A[n]={0};

    for(int i =0;i<n;i++)
        cin>>A[i];

    question(A,n);



}