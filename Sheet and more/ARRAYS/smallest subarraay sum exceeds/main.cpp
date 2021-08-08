

#include <bits/stdc++.h>
using namespace std;


// Here we have used sliding window method again, it includes number from one end and excludes from the other end once
// the sum has started to exceed the given value.

class Solution{
public:

    int sb(int arr[], int n, int x)
    {
        int curr_sum = 0, min_len = n + 1;


        int start = 0, end = 0;
        while (end < n) {

            while (curr_sum <= x && end < n)
                curr_sum += arr[end++];


            while (curr_sum > x && start < n) {
                if (end - start < min_len)
                    min_len = end - start;

                // remove starting
                curr_sum -= arr[start++];
            }
        }
        return min_len;

    }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution obj;
        cout<<obj.sb(a,n,x)<<endl;
    }
    return 0;
}  // } Driver Code Ends