#include<iostream>
#include<bits/stdc++.h>

#define ll long long int
using namespace std;

int main()
{
	ll t=0,N=0,ns=0,h=0;
	
	cin>>t;
	
	
	while(t--)
	{
		cin>>N;
		ll A[N+1]={0};
		ll T[N+1]={0};
		ll count[N]={0};
		for(ll i=1;i<N+1;i++)
			{
				T[i]=i;
				A[i]=i;
			}
//main working
		
		if((N*(N+1)/2)%2==0)
		{
		for(ll j=1;j<=N;j++)
			{
				for(ll k=j+1;k<=N;k++)
				{					
					h=A[j];
					A[j]=A[k];
					A[k]=h;
						//for(ll p=1;p<=N;p++)
						//cout<<A[p];
						//cout<<endl;
//all configurations generated
					
					for(ll m=1;m<N;m++)
						{
							ll sl=0;
							for(ll a=1;a<=m;a++)
								sl+=A[a];
								
							if(sl==(N*(N+1)/4))
								{
									ns++;
									count[m]++;
									cout<<"difference "<<(N*(N+1)/4)-(m*(m+1)/2)<<"at m="<<m<<endl;
									cout<<"A[j]"<<A[j]<<" A[k]"<<A[k]<<endl;
								}
							
						}
						
						for(ll p=1;p<=N;p++)
							A[p]=T[p];	

				}	
			}
			for(ll i=0;i<N;i++)
			{
				if(count[i]!=0)
					cout<<"nice swaps under "<<i<<" "<<count[i]<<endl;
			}
			cout<<ns<<endl;
			
			ns=0;
		}
		else
		cout<<0<<endl;
					
		
	}	
		
		
		
	}
