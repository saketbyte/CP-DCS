#include<iostream>
#include<bits/stdc++.h>

// Left traversal - right traversal
/*
Oh my god ! I loved this problem. At first I thought I will be able to do it in O(n) or at max O(n2)
Now I will solve this using a smart aproach.
The water will be stored between any two columns upto the level of minimum of the two. So what we do is-
1. We traverse the array of heights from left to right to find what is the maximum height yet which can enclose the water.
2. We traverse the array of heights from right to left to find what is the maximum height yet which can enclose the water.
3. Now we have the boundary conditions to enclose water from both the ends, and now the water stored at each place will be
the minimum of the heights found in 1 and 2 minus the height of block at that place as volume was occupied by the block itself
instead of the water, so untill this step we will have the value of water enclosed correctly at each block as we have the information
of its left max and right max height.
4. The final step is to just sum the water stored at each block.
*/

using namespace std;


int main()
{
    int n;
    cin>>n;
    int A[n];

    for(int i =0;i<n;i++)
    {
        cin>>A[i];
    }


    int left_max[n] = {0},right_max[n]={0};
    int max1 =A[0];
    int max2 =A[n-1];
    for(int i =0;i<n;i++)
    {
        if(max1<=A[i])
            max1 = A[i];
        left_max[i] = max1;


        if(max2<=A[n-i-1])
            max2 = A[n - i - 1];
        right_max[n - i - 1] = max2;

    }
    int water[n]={0};

    for(int i =0;i<n;i++)
    {
        water[i]=min(left_max[i],right_max[i])-A[i];
    }
    int store=0;
    for(int i =0;i<n;i++)
        store = store+ water[i];
    cout<<store;
}