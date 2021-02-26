#include<iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
	
	ll t=0,n=0;
	cin>>t;
	
	
	while(t--)
	{
	
		cin>>n;
		ll A[n]={0};
		for(ll i =0;i<n;i++)
			cin>>A[i];
			
		ll B[n]={0};
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=n-1;j>=i;j--)
				if(A[j]%A[i]==0)
					{
						B[i]=j+1;
						break;
					}
		}
		
		
		for(ll i =0;i<n;i++)
			cout<<B[i]<<" ";
		cout<<endl;
	
	}	
			
	
}
	
	
	

