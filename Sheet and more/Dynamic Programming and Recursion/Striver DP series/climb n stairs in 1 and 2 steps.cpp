// Recursiv approach 

class Solution {
public:
    int climbStairs(int n) {
        
        if(n==0)
            return 1;
        if(n==1)
            return 1;
        return climbStairs(n-1) + climbStairs(n-2);
        
        
    }
};

// Note that, if there are more choices than just taking steps of 1 or 2, say 1, 2 and 3 as well, then we 
// just need to make 3 recursive calls. 




// Iterative approach
class Solution {
public:
    int climbStairs(int n) {
        
        int x=1, xx=0;
        int ans,temp;
        for(int i =0; i <n;i++)
        {
            ans = x +xx;
            temp = x;
            x = ans;
            xx = temp;
        }
        return ans;
            
        
        
    }
};