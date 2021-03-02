#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int L,int M,int R)
{
    int n1 = M-L+1;
    int n2 = R-M;
    int l[n1],r[n2];
    for(int i =0;i<n1;i++)
        l[i] = arr[L+i];
    for(int j =0;j<n2;j++)
        r[j] = arr[M+1+j];
    int i = 0, j = 0 , k = L;

    while(i<n1 && j<n2)
    {
        if(l[i]<=r[j])
        {
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = r[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r)
{

    if(l>=r)
        return;
    else
    {
        int m = (l+r-1)/2;

        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);

    }

}


int main()
{

    int n =0;

    cin>>n;
    int A[n];
    for(int i =0;i<n;i++)
        cin>>A[i];

    mergeSort(A,0,n-1);
    for(int i =0;i<n;i++)
        cout<<A[i];

}



/*
 * How does this merge sort work ?
 *
 * So we have three functions main() as usual and mergeSort() and merge.
 *
 * The main strategy is to divide until you achieve a single comparison based sorting to avoid multiple comparisons of randomly
 * arranged numbers.
 *
 * ** the merge function **
 * This function takes an array whose left and right parts are to be merged into one array in an order. The merging is simple,
 * you compare element by element of the two arrays and insert the smaller one in a new array(or previously whose values were
 * already retrieved in two separate left and right arrays).
 *
 * The function mergeSort is where fun begins, it calls itself two times, one for the left part of given array and one for the right
 * part, now the order in which the function calls were made is the same order in which the will be executed first in first out
 * like a stack.
 * So we would divide left until only 1 element is remaining in the final left array.
 * Similarly, we would divide right untill 1 element is remaining in the final right array.
 *
 * Then we start the execution of calls of the merge function which merges the two segments of one array into an ordered arragement
 * in the same array itself.
 *
 *
 */