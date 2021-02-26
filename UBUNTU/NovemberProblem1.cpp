#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int t=0,n=0,b1=0,b2=0,sum;
	cin>>t;
	
	
	while(t--)
	{
		//bool flag=true;
		cin>>n;
		int A[n]={0};
		
		for(int i=0;i<n;i++)
			cin>>A[i];
			
		if(n==1)
		cout<<A[0]<<endl;
		else{
			
	/*	for(int i=0;i<n-1;i++)
		{
			if(A[i]!=A[i+1])
			flag=false;
		}
		if(flag)
		{
			if(n%2==0)
				sum=A[0]*n/2;
			else
				sum=A[0]*(n+2)/2;
				
			
		}*/
	
		
		sort(A, A + n, greater<int>());

			
		b1=A[0];
		b2=A[1];
		sum=0;
		int x=2;		
		
		while(n>x)
		{
			
			
			if(b1>=b2)
			{
				sum=sum+b2;
				b1=b1-b2;
				if(b1==0)
				{
					b1=A[x];
					x++;
					if(x<n && b2!=0)
					{	b2=A[x];
						x++;
					}
					else
					b2=0;
				}
				else
				{	b2=A[x];
					x++;
				}
				
				
			}
			else
			if(b2>b1)
			{
				sum=sum+b1;
				b2=b2-b1;
				b1=A[x];
				x++;
			}
			
	/*	cout<<"sum"<<" when"<<" b1"<<" b2"<<" x"<<endl;
			cout<<sum<<"	 "<<b1<<"  "<<b2<<"  "<<x<<endl; 
			
			*/
		}

		
			if(b1>=b2)
			{
				sum=sum+b1;
				b1=b1-b2;
			}
			else
			if(b2>b1)
			{
				sum=sum+b2;
				b2=b2-b1;
			}	
		
	
		cout<<sum<<endl;
		sum=0;
		
	
	
		}
	}
	
	
	
	
	
}
	
	
	

