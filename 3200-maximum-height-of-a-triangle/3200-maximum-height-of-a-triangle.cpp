class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        return max(solve(red,blue), solve(blue,red));
    }
    
    
    int solve(int red, int blue){
        int balls = 1, height = 0;
        while(true){
            red -= balls;
            if(red < 0)
                break;
            balls++;
            height++;
            blue -= balls;
            if(blue < 0)
                break;
            balls++;
            height++;
        }
        return height;
    }
    
};