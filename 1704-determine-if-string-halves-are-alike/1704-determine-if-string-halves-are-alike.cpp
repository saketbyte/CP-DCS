class Solution {
public:
    bool halvesAreAlike(string s) {
        
        
        int i =0, j = s.length()-1;
        int left =0, right =0;
        for(int i =0;i<s.length()/2;i++)
        {
            if(s[i]== 'a' || s[i]== 'e'
              || s[i]== 'i' || s[i]== 'o' || s[i]== 'u'
              || s[i]== 'A' || s[i]== 'E' || s[i]== 'I'| s[i]== 'O'
              || s[i]== 'U')
                left++;
            
            if(s[j]== 'a' || s[j]== 'e'
              || s[j]== 'i' || s[j]== 'o' || s[j]== 'u'
              || s[j]== 'A' || s[j]== 'E' || s[j]== 'I'| s[j]== 'O'
              || s[j]== 'U')
                right++;
            j--;
        }
        
        return left == right;
        
    }
};