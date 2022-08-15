
// The logic here, is we calculate the unbalanced brackets, and then to reach upto that place to make it balanced, we will need 
// to make those number of swaps from the next open bracket. 
// Since one swap will make one balanced, so we update that value. 
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        int open = 0, close = 0, unbalanced = 0;
        
        if(S.size()==0)
        return 0;
        
        int ub = 0;
        int swaps=0;
        for(int i =0;i<S.size();i++)
        {
            char x = S[i];
            
            if(x == '[')
            {
            
            open++;
            if(unbalanced > 0)
            {
                swaps+= unbalanced;
                unbalanced--;
            }
            
            }
            
            else
            {
                close++;
            unbalanced = close - open;
           
            }
            
            
            
        }

        


        
        return swaps;
       
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends