#include<bits/stdc++.h>

using namespace std;

/*
 * So you know most of the broader theory of this algorithm. The quick sort was invented to avoid the shortcomings of the merge sort algorithm
 * which is the use of extra space.
 *
 * The quick sort method achieves this by instead of blindly dividing the original array into left and right half, dividing it with the strategy of
 * using a pivot element. We pick up an element from the array based on some simple logic like last first or ideally median element.
 *
 * Now, let me explain the code line by line-
 * We have 2 methods here- the partition algorithm and the quick sort itself.
 */


int partition(int A[], int lb, int ub)
{
    int pivot_element = A[lb];      // picking up the first as pivot element
    int start = lb;                 // starting index
    int end = ub;                   // ending element

    while(start<end)
    {
                                            // See we assume that our partition to be done is such that left of pivot is everything smaller
        while(A[start]<=pivot_element)      // right to pivot is everything larger. So these two while loops of start and end pointers do nothing but find out the
            start++;                        // outliers in this pattern and then swaps the outlier of left with outlier of right ! Yay !

        while(A[end]>pivot_element)
            end--;

        if(start<end)                       // Now since we have to put the pivot at its desired position as well, we will swap the pivot element at
        {                                   // the position where the "end" index was stopped well, because that was the point where outlier was just fixed by swapping.

            cout<<"swapping"<<A[start]<<" "<<A[end]<<endl;
            int temp1= A[start];
            A[start] = A[end];
            A[end] = temp1;


            // Note that the elements may not be sorted yet among themselves but with respect to the pivot element our array is partitioned very well !
        }
    }




    cout<<"swapping  "<<pivot_element<<" "<<A[end]<<endl;


    int temp2= pivot_element;
    A[lb] = A[end]; //pivot element in array
    A[end] = temp2;




    return end;
}



void quickSort(int A[], int lb, int ub)
{

    if(lb<ub)
    {
        int loc = partition(A,lb,ub);
        quickSort(A,lb,loc-1);
        quickSort(A,loc+1,ub);

    }
}



int main()
{
    int n;
    cin>>n;
    int A[n];


    for(int i =0;i<n;i++)
        cin>>A[i];

    quickSort(A,0,n-1);


    for(int i =0;i<n;i++)
        cout<<A[i];
}

