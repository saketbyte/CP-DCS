class Solution {
public:
    
            
    
    bool searchMatrix(vector<vector<int>>& A, int target) {
        
        int rows = A.size(),
			cols = A[0].size(),
            row = 0, col = cols - 1;
			
        while (row < rows && col > -1) {
            int cur = A[row][col];
            if (cur == target) return true;
            if (target > cur) row++;
            else col--;
        }
        
        return false;
    
    }
};