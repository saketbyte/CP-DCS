#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{



double  t,count=1;
long long N;

double max,min;


cin>>t;

while(t--)
{

cin>>N;
double  m[N]={0.0};
double  c[N]={0.0};
for(long long  i=0;i<N;i++)
	c[i]=i+1;
	
for(long long  i=0;i<N;i++)
cin>>m[i];
	
	
max =-1;
min = 9999999;
double  x=0,T=0;
for(long long  i=0;i<N;i++)
	{	
	
		
		 
		for(long long  j=0;j<N;j++)
		{	
				double dm=m[i]-m[j];
				if(dm!=0)
				{
				T=(c[j]-c[i])/dm;
				x=((m[i]*c[j])-(m[j]*c[i]))/dm;
				cout<<"t"<<T;
				cout<<"		x "<<x<<endl;	
				if(T>=0)
				if(x>=0)
				count++;
				cout<<"count"<<count<<endl;
				
				}
				
		}
	
			if(min>count)
				{	
					min=count;
					cout<<"min"<<min<<endl;				
				}
					
				
			if(max<count)
				{ max=count;
					cout<<"max"<<max<<endl;
					
			
				}
			
	
		count=1;
		
	
	}
	
	cout<<min<<" "<<max<<endl;



}


}
