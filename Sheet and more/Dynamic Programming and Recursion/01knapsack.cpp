//{ Driver Code Starts - explanation in ONENOTE 
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int S[], int m, int n) {

        // code here.
        
         long long int CC[m][n+1];
       
       for(int i = 0; i < m; i++){
           
           for(int j= 0; j <= n ; j++){
              CC[i][j] = 0;
           }
       }
       
       
       sort(S, S+m);
       
       
       for(int i = 0; i < m; i++){
           
           CC[i][0] = 1;
       }
       
       
       //generate first row
       
        for(int j = 0; j <= n; j++){
           
           if(j%S[0] == 0)CC[0][j] = 1;
       }
       
       
       //start from 2nd row
       for(int  i = 1; i < m; i++){
           
           for(int j = 1; j <= n; j++){
               
               if(S[i] > j){
                   CC[i][j] = CC[i-1][j];
               }
               
               else{
                   CC[i][j] = CC[i-1][j] + CC[i][j - S[i]];
               }
           }
           
       }
    
       return CC[m-1][n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}
// } Driver Code Ends