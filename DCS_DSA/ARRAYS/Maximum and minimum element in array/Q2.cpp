#include<iostream>
#include<bits/stdc++.h>

using namespace std;



void question(int A[],int n)
{
	
	int min = A[0];
	int max = A[0];
	
	for(int i =1;i<n;i++)
	{
		if(A[i]>max)
		max = A[i];
		if(A[i]<min)
		min = A[i];
	}
	
	
	cout<<"Min is "<<min<<endl;
	cout<<"Max is "<<max;
	

	
	
}



int main()
{
	
	int n=0;
	cin>>n;
	
	int A[n]={0};
	
	int i=0;
	for(i = 0;i<n;i++)
	cin>>A[i];
	
	question(A,n); // asuuming the array is unsorted.
	
}
		
