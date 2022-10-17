class Solution {
public:
    bool checkIfPangram(string s) {
        int seen = 0;
        for (char ch : s) seen |= 1 << (ch - 'a');
        return seen == (1 << 26) - 1;
        
        
    }
};