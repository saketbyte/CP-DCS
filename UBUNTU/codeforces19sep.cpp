#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 


int main()
{
	int t=0,n=0,num=0;
	
	

cin>>t;
while(t--)
{
	
	cin>>n;
	cin>>num;
	
	
	int A[n]={0};
	for(int i=n-1;i>=0;i--)
	{
		A[i]=num%10;
		num=num/10;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"sasta greedy"<<endl;
		if(i%2!=0)
		{
			for(int r=1;r<n;r=r+2)
				if(A[r]%2==0)
					{
						A[r]=-1;
						break;
					}
			
		}
		else
		{
			
			for(int b=0;b<n;b=b+2)
				if(A[b]%2!=0)
					{
						A[b]=-1;
						break;
					}
			
			
			
		}
		
		
		
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<"After greedy"<<endl;
		if(i%2!=0)
		{
			for(int r=1;r<n;r=r+2)
				if(A[r]!=-1)
					{	A[r]=-1;
						break;
					}
					
						
			
		}
		else
		{
			
			for(int b=0;b<n;b=b+2)
				if(A[b]!=-1)
					{
						A[b]=-1;
						break;
					}
			
			
			
		}
		
		
		
		
		
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<"checker"<<n<<endl;
		if(A[i]!=-1)
			{	cout<<"checker"<<endl;
				if(A[i]%2==0)
				{cout<<2;
				break;}
				else
				{
					cout<<1;
					break;
				}
				
				
				
			}
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
}








	
	
	
	
}
