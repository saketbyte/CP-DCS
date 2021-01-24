#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void question(int A[],int n)
{
	int temp = 0;
	for(int i =0;i<n/2;i++)
	{
		temp = A[i];
		A[i]=A[n-1-i];
		A[n-1-i] = temp;
	
	}
	
	for(int i =0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
	
}


int main()
{
	
	int n=0;
	cin>>n;
	
	int A[n]={0};
	
	int i=0;
	for(i = 0;i<n;i++)
	cin>>A[i];
	
	question(A,n);
	
}
		
	
