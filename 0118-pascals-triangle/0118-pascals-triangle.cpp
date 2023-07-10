class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
      vector<vector<int>> ans(numRows);
        for(int i=0; i<numRows; i++){
            ans[i].resize(i+1); // increase the size of next row by 1
        ans[i][0]=ans[i][i]=1; // initialize first and last element of each row as 1
        
        for(int  j=1; j<i;j++)
            ans[i][j]= ans[i-1][j-1]+ans[i-1][j]; // perform simple addition of elements of above row 
            }
     return ans;   
    }
};