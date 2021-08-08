// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > A, int r, int c) 
    {
        int i, k =0,l=0;
        int row = r-1, col = c-1;
        vector <int> B;
        
        while(k<=row && l <=col)
        {
            for(i =l;i<=col;i++)
            B.push_back(A[k][i]);
            k++;
            
            for(i = k; i<=row;i++)
            B.push_back(A[i][col]);
            col--;
            
            if(k<=row)
            {
                for(i = col;i>=l;i--)
                B.push_back(A[row][i]);
                row--;
        
            }
            
            if(l<=col)
            {
                for(i =row;i>=k;i--)
                B.push_back(A[i][l]);
                l++;
            }
        }
        return B;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends