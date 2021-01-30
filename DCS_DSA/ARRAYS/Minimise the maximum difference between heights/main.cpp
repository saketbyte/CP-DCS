#include <iostream>
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

/*
 * The logic being used here is to sort array
 * and check if naturally the maximum height -k and minimum height +k
 * is able to give the answer or :
 * if we can increase or decrease each element to find out the minimum possible differences.
 */

int question(int A[], int n, int k)
{
    mergeSort(A,0,n-1);


    int mn = A[0]+k, mx= A[n]-k;


    int result =mx-mn;

    for(int j = 0;j<n;j++)
    {
        mn = min(A[0]+k,A[j]-k);
        mx = max(A[n-1]-k,A[j-1]+k);
        if(mn<0)
            continue;
        result = min(result, mx-mn);
        cout<<"min   max   result"<<endl;
        cout<<mn<<"       "<<mx<<"       "<<result<<endl;
    }

return result;

}

int main() {

    int n;
    cin>>n;
    int k;
    cin>>k;
    int A[n];

    for(int i=0;i<n;i++)
        cin>>A[i];

    cout<<question(A,n,k);

}
