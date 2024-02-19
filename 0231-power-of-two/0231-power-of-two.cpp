class Solution {
public:
    bool isPowerOfTwo(int n) {
        
//          This works because if n is power of 2 with ith bit set, then in n-1, i will become unset and all bits to right of i will become set. Thus the result of AND will be 0.

// If n is a power of 2:
// n    = 8 (1000)
// n-1  = 7 (0111)
// ----------------
// &    = 0 (0000)
        
        
        return n > 0 && !(n & (n-1));
    }
};