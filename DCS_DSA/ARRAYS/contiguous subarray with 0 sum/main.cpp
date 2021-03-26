/* I got confused with sub-array and subset, the elements with 0 sum must be contiguous.
 * The appraoch is that the sum will be 0
 * if a cumulative sum of elements is 0
 * or if the cumulative sum decreases by the same amount with which it was increased earlier ie a negative subarray exists whose
 * elements and the previous elements from which the element sum reached the same amount equate to 0 sum*/

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int A[], int n)
    {
        int sum = 0;
        set<int> s;

        for(int i =0;i<n;i++)
        {
            sum = sum+ A[i];
            if (sum == 0 || s.find(sum)!= s.end())
                return true;
            s.insert(sum);
        }
        return false;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        if (obj.subArrayExists(arr, n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}  // } Driver Code Ends