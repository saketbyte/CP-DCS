//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string A[], int n)
    {
        unordered_map<string,int> freq;
        
        for(int i =0;i<n;i++)
        {
            freq[A[i]]++;
        }
        
        int Max = INT_MIN, Min = INT_MIN;
        string ans = "";
        
        string dup;
        
        for(auto it : freq){
            if(it.second>Max){
                Max = it.second;
                dup= it.first;
            }
        }
// Find the maximum here, and then find the maximum but lesss than the most maximum we have.
    
        for(auto it:freq){
            if(it.second<=Max && it.second>=Min && it.first!=dup){
                Min = it.second;
                ans = it.first;
            }
        }
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
