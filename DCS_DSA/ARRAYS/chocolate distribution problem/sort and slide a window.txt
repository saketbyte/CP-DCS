// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a,long long n, long long m);

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		cout<<findMinDiff(a,n,m)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long findMinDiff(vector<long long> a, long long n, long long m){
    
    sort(a.begin(),a.end());
    auto i =a.begin();
    auto j = i+m-1;
    int min = INT_MAX;
    int diff;
   while(j!=a.end())
   {
        diff = *j-*i;
        
        if(min>diff)
            min = diff;
           
        
        j++;
        i++;
    }
    
return min;
    
}

// So here what we have done is very very simple. We simply sort the array and then find two elements in the array 
// which are at a gap of m-1 and can provide the minimum difference possible.