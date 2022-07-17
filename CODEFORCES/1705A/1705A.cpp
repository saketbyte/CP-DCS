#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
   int n,x;
   cin>>n>>x;

   vector<int> A(2*n);

   for(int i =0; i <2*n;i++)
	 cin>>A[i];

   sort(A.begin(),A.end());
  
   
   
	int flag = 1;
	int diff = 0;
	int temp = n;
	int i =0;
	int j = n;
	
	while(n--)
	{
		diff = A[j]-A[i];
		
		if(diff<x)
		{
			flag = 0;
			break;
		}
		i++;
		j++;
	}
   
   
   
		
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
		
   

    }


    return 0;
}