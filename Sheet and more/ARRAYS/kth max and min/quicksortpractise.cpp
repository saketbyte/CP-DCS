#include<bits/stdc++.h>
using namespace std;

int partition(int A[], int low, int high)
{
    int pivot = A[high];
    int ptr = low-1; // This is used to keep track of the elements in our first part of arrray which has 
                    // smaller than pivot elements. 

    for(int i = low;i<high;i++)
    {
        if(A[i]<pivot)
        {
            ptr++;
            int temp  = A[ptr];
            A[ptr] = A[i];
            A[i] = temp;

        }

        
    }

    ptr++; // making space to insert pivot at right place, just previous to larger element start

    int temp = A[ptr];
    A[ptr] = A[high]; // A[high] or pivot both are same thing here.
    A[high] = temp;


    return ptr;

}


void quickSort(int A[], int low, int high)
{

    // this is the function in which we have to make changes to get the kth smallest or largest element from our 
    // array.
    if(low<high)
    {
        int p_idx = partition(A, low, high);
        quickSort(A, low,p_idx-1);
        quickSort(A,p_idx+1,high);
    }

}

int main()
{

    int n;
    cin>>n;
    int A[n] = {0};
   
    
    for(int i =0; i <n;i++)
        cin>>A[i];

    quickSort(A,0,n-1);


    
    for(int i =0; i <n;i++)
        cout<<A[i]<<" ";

}