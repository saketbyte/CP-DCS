//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        int n = str.length();
        
        const int MAX_CHARS = 256;

        bool dist_list[MAX_CHARS] = {false};
        int dist_count = 0;
        
        for(int i =0;i<n;i++)
            if(!dist_list[str[i]])
            {
                dist_count +=1;
                dist_list[str[i]] = true;
            }
            
        int start = 0, stop = 0, min_len = INT_MAX;
        int freq[MAX_CHARS] = {0};
        
        int curr_count = 0;
        
        for(int i=0; i<n; i++)
        {
            char x = str[i];
            freq[x]++;
            
            if(freq[x]==1)
            curr_count++;
            
            if(curr_count>=dist_count)
            {
                while(freq[str[start]] > 1)
                {
                    if(freq[str[start]] > 1)
                    {
                        freq[str[start]]--;
                    }
                     start++;
                }
                
                int curr_len = i - start +1;
            
            min_len = min(min_len,curr_len);
            }
            
            
            
            
        }
        
        
        return min_len;
        
        
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends