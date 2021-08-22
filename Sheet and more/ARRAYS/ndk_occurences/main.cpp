#include<iostream>
#include<bits/stdc++.h>

using namespace std;









// Better approach:
// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k)
    {
        unordered_map<int,int> mp;
        int count=0;

        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        
        unordered_map<int,int>::iterator i;
        for(i=mp.begin();i!=mp.end();i++)
        {
            if(i->second > (n/k))
            {
                i->second=0;
                count++;
            }
        }
return count;

    }
};


// // { Driver Code Starts.
// int main() {
//     int t, k;
//     cin >> t;
//     while (t--) {
//         int n, i;
//         cin >> n;

//         int arr[n];

//         for (i = 0; i < n; i++) cin >> arr[i];
//         cin >> k;
//         Solution obj;
//         cout << obj.countOccurence(arr, n, k) << endl;
//     }
//     return 0;
// }
//   // } Driver Code Ends





// int main()
// {
//     int n,k;

//     cin>>n>>k;

//     int A[n];

//     for(int i =0;i<n;i++)
//         cin>>A[i];


//     sort(A,A+n);

//     int count =0;

//     for(int i =1;i<n;i++)
//     {
//         if(i==n-1 && count>n/k)
//             cout<<A[n-1];
//         if(A[i]==A[i-1])
//         {
//             count++;

//         }
//         else
//         {
//             if(count>(n/k))
//                 cout<<A[i]<<endl;
//             count = 0;

//         }

//     }


// }