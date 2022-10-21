class Solution {
public:
    int maxProduct(vector<int>& A) {
        
        int curr_max = 1;
        int curr_min =1;
        
        int glob_max = A[0];
        
        for(int i  =0; i<A.size(); i++)
        {
            if(A[i] == 0)
            {
                curr_max = curr_min = 1;
                glob_max = max(0,glob_max);
            }
            
            else
            {
                int temp = curr_max;
                curr_max = max(A[i], max(A[i]*curr_max,                                             A[i]*curr_min));
                
                curr_min = min(A[i], min(A[i]*curr_min,                                         A[i]*temp));
                
                glob_max = max(glob_max, curr_max);
            }
        }
        
        return glob_max;
        
        
        
    }
};