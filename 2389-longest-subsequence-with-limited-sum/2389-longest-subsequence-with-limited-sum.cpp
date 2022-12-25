class Solution {
public:
    vector<int> answerQueries(vector<int>& A, vector<int>& queries) {
        
        
        sort(A.begin(), A.end());
        vector<int> res;
        
        // prefix sum
        for (int i = 1; i < A.size(); ++i)
            A[i] += A[i - 1];
        
        // binary search for each query
        for (int& q: queries)
            res.push_back(upper_bound(A.begin(), A.end(), q) - A.begin());
        return res;
        
    }
};