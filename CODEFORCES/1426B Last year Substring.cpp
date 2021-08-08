#include<iostream>
#include<bits/stdc++.h>
#include<String>
using namespace std;
int main()
{
	int t=0,n;
	string S="";
	
	cin>>t;
	while(t--)
	{
		
		cin>>S;
		cin>>n;
		for(int i=0;i<5;i++)
			{
				
				string S1 = S.substr(0,i);
				string S2 = S.substr(n-4-i,4-i);
				if(S1+S2=="2020")
				cout<<"YES";
				else
				cout<<"NO";				
			}
		
		
		
		
		
	}
	
	
}
