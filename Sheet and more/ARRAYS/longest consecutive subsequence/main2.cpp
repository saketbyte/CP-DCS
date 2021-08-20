// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int A[], int N)
    {
       set<int> S;
       
       for(int i =0;i<N;i++)
          S.insert(A[i]);
          
          int sublen = 0;
          
        for(int i =0;i<N;i++){
            
            if(S.count(A[i]-1)==0)
            {
                int currentnum = A[i];
                int csublen = 1;
                
            while(S.count(currentnum+1)){
                currentnum++;
                csublen++;
            }
            
            sublen = max(csublen,sublen);
                
            }
                
        }
        
        return sublen;
       
       
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends