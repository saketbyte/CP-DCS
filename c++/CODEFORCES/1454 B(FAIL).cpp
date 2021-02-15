#include<iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
//FAILED ATTEMPT
int main()
{
	int t=0,n;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		vector <int> A(n);
		for(int i=0;i<n;i++)
			cin>>A[i];
			bool flag =true;
		int min = *min_element(A.begin(), A.end()); 
	//	cout<<"min"<<min<<endl;
		int ix = min_element(A.begin(), A.end())- A.begin();
		
		
		for(int i=0;i<n;i++)
		cout<<A[i];
		cout<<endl;		
	int	count = 0;
		for(int i=0;i<n;i++)
			if(min!=A[i])
				{	
			//	cout<<"not equal"<<endl;
				continue;
				}
				else
				{
			//		cout<<"equal"<<endl;
				count++;
				if(count>1)
					{
					flag =false;
					break;}
					
				}
				
		if(flag==false)
		cout<<"-1"<<endl;
		else
		cout<<ix+1<<endl;
					
							
				
			}
	
	
}
