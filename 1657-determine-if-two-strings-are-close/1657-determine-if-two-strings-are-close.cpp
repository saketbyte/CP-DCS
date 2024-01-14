class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
         vector<int>w1(26,0),w2(26,0),w3(26,0),w4(26,0);
        // w1 and w3 are to store the count of each letter and track the unique characters present
        // we can do so using w1 only as well but it would increase time complexity
        // because we will have to traverse and check one more time that count and frequency both are same or not.
        for(char c:word1)
            w1[c-'a']++,w3[c-'a'] = 1;
    
        
        // w2 and w4 are to check the count and presence of unique characters because only amongst them we can transform occurences or swap their frequencies...
        for(char c:word2)
            w2[c-'a']++,w4[c-'a'] = 1;
        
        // if we have same sequence after sorting 
        // if we have same unique characters present in string
        // our answer is yes
        sort(begin(w1),end(w1));
        sort(begin(w2),end(w2));
        return w1==w2&&w3==w4;
        
    }
};