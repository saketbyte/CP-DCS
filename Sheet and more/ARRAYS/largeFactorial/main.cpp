#include<bits/stdc++.h>
using namespace std;
#include <vector>

class Solution {

public:

    void multiply(int x, vector<int>&res)
    {
        int carry = 0;

        for (int i=0; i<res.size(); i++)
        {
            int prod = res[i] * x + carry;

            res[i] = prod % 10;

            carry  = prod/10;
        }
        /* up till here we are doing the multiplication part cell by cell of an array, as if we would to manually.*/

        while (carry)
        {
            res.push_back(carry%10);
            carry = carry/10;
        }
        // This while loop will handle the increase in digits when we had multiplied at the highest power of 10 and appends our array.

    }

    vector<int> factorial(int N){

        vector<int>res;

        res.push_back(1);
        int res_size=1;

        for (int x=2; x<=N; x++)
            multiply(x, res);

        reverse(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}