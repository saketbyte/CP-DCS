class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        
        // Score = A[i] - i + A[j] + j
        // The logic is to find maximum first half, 
        // and the maximum second half possible and add them.
        // Make sure to not chosee when i == j
        
        int n = A.size();
        // Ek step pehle ye kar dia start update
        int start =A[0] + 0;
        int res = INT_MIN;
        
        for(int i =1;i<n;i++)
        {
            // fir yahan par A[i]-i or sum calculate kia or max store kia
            res = max(res, start + A[i]-i);
            
            // uske baad yahan par start calculate kiya
            
            start = max(start, A[i]+i);
            
        }
        
        return res;
        
        
        
        
    }
};