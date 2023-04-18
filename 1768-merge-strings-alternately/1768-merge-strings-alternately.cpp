class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string ans;
        
        int a = word1.length();
        int b = word2.length();
        
        int i =0, j =0;
        
        while(i<a && j<b)
        {
            
            
                ans+=word1[i];
            
            
            
                ans+=word2[j];
            i++; j++;
        }
        
        if(i<a)
        {
            ans= ans + word1.substr(i,a-i);
        }
         if(j<b)
        {
            ans= ans + word2.substr(j,b-j);
        }
        return ans;
        
    }
};