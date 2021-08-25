class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0, r = m * n - 1;
        // now, total elements in that 1D array will be n*m
		// therefore, indices will go from 0 to n*m-1
		// so, let our left pointer is 0 and right pointer is n*m-1
        // now, what will be the row index and column index of this mid point?
		// as we can see that there will be packets of size m that are placed one after other in order
		// therefore, to see which pachet number it belongs to, we need to divide mid by m
		// and there are m elements in each packet, therefore, we need to take % m to find which column number it belongs to 

        while (l != r){
            int mid = (l + r - 1);
            if (matrix[mid / m][mid % m] < target)  // this is a nice way to find the indices [i][j] of a double dimensional array.
                l = mid + 1;
            else
                r = mid;
        }
        return matrix[r / m][r % m] == target;
    }
};