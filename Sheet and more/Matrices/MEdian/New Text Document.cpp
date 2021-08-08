// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &A, int N, int M){


    int min = INT_MAX;
    int max = INT_MIN;
    int desired_count = 1+(N*M)/2;
   for(int i=0;i<N;i++)
    {
        if(A[i][0]<min)
        min = A[i][0];
        if(A[i][M-1]>max)
        max = A[i][M-1];
    }
    int counter =0;
   
     while(min<max)
    {
        counter=0;
        int mid = (max+min)/2;
        for(int i= 0;i<N;i++)
        {
            counter = upper_bound(A[i], A[i]+M, mid) -  A[i];
        }
        if(counter < desired_count)
            min = mid+1;
        else
            max = mid;
    }
    return min;

   }
};

// The logic used here is that we find the smallest and largest element of the given matrix and then within
// these 2 bounds we find which element has 1+(N*M)/2 smaller elements and we consider it as a candidate
// as we are yet to ascertain that this element is present or not, the smallest such number within the range which
// is having 1+(N*M)/2 smaller elements is defintely present and hence we can find the median.

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends