class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int x = min(word1.length(), word2.length());
        int y =0;
        
        string ans;
        
        while(y<x)
        {
            ans += string() + word1[y] + word2[y];
            y++;
        }
        
        ans += word1.substr(y) + word2.substr(y++);
                
        return ans;
    }
};