vector<int> mem(46,-1);
class Solution {
public:
    
//     int solve(vector<int>mem, int n)
//     {
        
    
//     }
    
    int climbStairs(int n) {
        
//     vector<int> mem(46,-1);

//        return solve(mem, n);
        
        
       if(n==1 || n==2 )
           return mem[n] = n;
       else 
       if(mem[n]!=-1)
           return mem[n];
        
       else{
           
         mem[n] = climbStairs(n-1) + climbStairs(n-2);
       }
        
        return mem[n];
        
 
        // I was passing array everytime in function call hence it was giving error as the stack was getting filled up very soon. 
        
    }
};