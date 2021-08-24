// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

//  The logic used here is kinda the most intuitive one. This is a brute force solution which requires 2-3 passes through the entire array.
//  See-
//  Water logged = F(current wall height, tallest wall to left, tallest wall to right)
//  This since we already are given the array of current wall height, we will create the tallest left and tallest right arrays. <- Can be done in 1 pass.
//  Now, the water height will be upto the minimum of the two walls. Hence, we find the minimum of left and right in an array called level. <- done in second pass.
//  And this will allow us to calculate the logged water level.
//  water += level[i] - current[i]



class Solution{

    public:
    int trappingWater(int A[], int n){
        
        int L[n] = {0}; int R[n] = {0};
        int water = 0;
        L[0] = A[0];
        R[n-1]= A[n-1];
        
        for(int i = 1;i<n;i++)
            L[i]= max(L[i-1], A[i]);
            
        for(int i = n-2;i>=0;i--)
            R[i] = max(R[i+1],A[i]);
           
        
     
        int level[n];
        
        for(int i =0;i<n;i++)
        level[i] = min(L[i],R[i]);
        
      
        
        for(int i =0;i<n;i++)
        water += level[i]-A[i];
        
        return water;
        
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends