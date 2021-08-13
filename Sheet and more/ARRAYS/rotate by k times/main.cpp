#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define For(m,n) for(auto i = m; i < n ;i++)
#define pb push_back

// Better Approach is this:
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if(nums.size() == 0)
            return;
        else
        {
            k = k%nums.size();
            
            reverse(nums, 0, nums.size()-1);
            reverse(nums, 0,k-1);
            reverse(nums,k,nums.size()-1);
            
        }
        
    }
    
    void reverse(vector<int> &A, int a, int b)
    {
        while (a < b) {
            int temp = A[a];
            A[a] = A[b];
            A[b] = temp;
            a++;
            b--;
        }
    }
};

// Another approach




void question(vector<int> A,int k)
{
    vector<int> x;
    For(0,k)
        x.push_back(A[i]);

        For(A.begin(),A.end()-k)
        {
           *i=*(i+k);
        }

    int c=0;
    For(A.end()-k,A.end())
    {

            *i = x[c];
            c++;
    }

    For(A.begin(),A.end())
        cout<<*i<<endl;
}


int main()
{
    vector<int> A;
    int input;
    int n,k;
    cin>>n>>k;

    For(0,n)
    {
        cin>>input;
        A.pb(input);
    }

    question(A,k);

}