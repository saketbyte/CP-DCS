//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

// Memoisation and recursion approach
    bool fun(int n, int A[], int goal, vector<vector<int>> &M )
    {
        // cout<<n<<"<- n and goal->  "<<goal<<endl;
        
        if(goal == 0)
            return true;
            
        if(n==0 && goal!=0)
        {
            return false;
        }
        if(M[n][goal]!= -1)
        return M[n][goal];
        
        if(A[n]>goal)
            return fun(n-1,A,goal,M);
        else
         return M[n][goal] = (fun(n-1,A,goal,M) || fun(n-1, A, goal-A[n-1],M));
        
    }
    
    
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        
        
        for(int i =0; i<N;i++)
        sum+=arr[i];
        
        vector<vector<int> > M(N + 1,
                            vector<int>(sum + 1, -1));
        
        if(sum%2==0)
        {
        // cout<<"calling"<<endl;
            return fun(N,arr,sum/2,M);
        }
        else
        return false;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    t = 1;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends