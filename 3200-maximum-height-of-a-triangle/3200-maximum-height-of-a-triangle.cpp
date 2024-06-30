class Solution {
public:
  
    int helper(int a, int b){
        
     int n1 = sqrt(a); // number of rows for the a ball
        int n2 = (-1 + sqrt(1 + 4 * b)) / 2; // number of rows for the b ball 

        // if the odd rows are the limiting factor
        if(n1 <= n2) return n1 * 2; 
        
        // if the even rows are limiting factor, add +1 because one more odd will be there after we're finished will all the even rows
        else return n2 * 2 + 1; 
    }


    int maxHeightOfTriangle(int red, int blue) {
        return max(helper(red, blue), helper(blue, red));
    }
};