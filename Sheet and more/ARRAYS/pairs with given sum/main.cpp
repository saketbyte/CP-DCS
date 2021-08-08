#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// links to learn about MAPS:
// https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
// http://www.cplusplus.com/reference/map/map/
int findPair(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int count = 0;

    // Store counts of all elements in map m
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    for (int i = 0; i < n; i++) {
        count = count + m[sum - arr[i]];
        if (sum - arr[i] == arr[i])
            count--;
    }
    return count / 2;
}



int main()
{

    int n,k;
    cin>>n>>k;
    int arr[n]={0};
    for(int i =0; i<n;i++)
        cin>>arr[i];



    cout<<findPair(arr, n, k);

    return 0;
}
