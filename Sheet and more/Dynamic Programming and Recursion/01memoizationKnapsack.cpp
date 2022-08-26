//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    int fun(int W, int wt[], int val[], int n,
    vector<vector<int>> &A) 
    { 
       // Your code here
       
       
       if(n==0 || wt==0)
       {
           return 0;
       }
       if(A[W][n] != -1)
        return A[W][n];
       
       if(wt[n-1]<=W)
       {
           
         return A[W][n] = max(val[n-1] + fun(W-wt[n-1],wt,val,n-1,A),
                           0 + fun(W,wt,val,n-1,A));
       }
       else
       {
           return A[W][n] =  0 + fun(W,wt,val,n-1,A);
       }
    }   
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> A(W+1, vector<int> (n+1, -1));
       
      return fun(W,wt,val,n,A);
    }   
    
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends