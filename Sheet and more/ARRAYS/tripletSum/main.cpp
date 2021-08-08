// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

/*
 * This is also a good problem we solve it in O of n_square. What we do here is that we fix the first element and then find the couple of elements which will give us the required sum.
 */
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        int a;
        
        for(int i =0;A[i]<=X;i++){
            
            a = A[i];
            int sum = X-a;
            
            int left = i+1,right = n-1;
            
            while(left<right)
            {
                if(A[left]+A[right]==sum)
                return 1;
                else
                {
                    if(A[left]+A[right]>sum)
                    right--;
                    
                    else
                    left++;
                    
                }
            }
           
        }
        
        return 0;
        
        
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends