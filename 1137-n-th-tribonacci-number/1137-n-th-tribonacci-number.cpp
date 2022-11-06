class Solution {
public:
     int memoization(int mem[], int n) {
        
          
        if(mem[n] != -1 )
            return mem[n];
        
        if(n == 2  || n == 1 )
            return mem[n] = 1;
        
        if( n == 0 )
            return mem[n] =  0;
      
        
        return mem[n] = memoization(mem, n-3) +  memoization(mem, n-2) + memoization(mem, n-1);
        
      
        
    }
    
    int tribonacci(int n)
    {
        int mem[38] ;
        for(int i =0;i<38;i++)
            mem[i] = -1;
        
        return memoization(mem, n);
        
        
    }
    
   
};