class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
         //s = shift;
       int s=0;
       while(l<r){
           l>>=1;  //l left
           r>>=1;  //r right
           s++;
       }
       return l<<s;
        
//         When we iterate from left to right (i.e., from the most significant bit to the least significant bit) of two integers left and right, we are essentially comparing their binary representations. 
//         The goal is to find the common prefix of their binary representations, as this common prefix represents the bits that are the same for all numbers within the range [left,right].
            
// those bits which are not same will in the end become zero that's why i have used s as a counter to count how many bits were different so that i can insert s number of zero after common bits of left and right
    }
};