// I am using merge sort to solve this.Later learn to use heaps,priority queue and all.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


/* merge( int arr[],int l,int m,int r) this function is doing most of the part. 
 * 
 * int arr[] is going to be divided into left and right from the mid,untill we reach upto 1 1 element in each array to begin with the first call of merging.
 * We then merge the two arrays using this merge function to sort them recursively. This same process is repeated for the other calls.
 *  *
 * */
 
 
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


void question(int A[],int n,int k)
{
	
	mergeSort(A,0,n-1);
	for(int i = 0; i<n;i++)
	cout<<A[i];
	cout<<endl;
	cout<<k<<"Smallest is"<< A[k-1]<<endl;
	cout<<k<<"Largest is"<<A[n-k]<<endl;
	
}

int main()
{
	
	cout<<"Input the size,kth ,and the array:"<<endl;
	
	int n=0;
	cin>>n;
	int k=0;
	cin>>k;
	
	int A[n]={0};
	
	int i=0;
	for(i = 0;i<n;i++)
	cin>>A[i];
	
	question(A,n,k);	
	
}
