class Solution {
public:
    string countAndSay(int n, string s = "1") {
     
        
    if(n==1) 
        return s;
    int i=0, j, len = s.size();
        
    string ans = "";
    // i is for iterating the string
    // j is for finding a unique character while i iterates through the string.
    // j is updated when current character does not match the previous unique character
    // When a mismatch between ith and jth character happens, it updates our new answer.
    // Above steps are repeated untill entire length is iterated by i. 
    // return the count and say value.
    while(i<len) 
    {
        j=i;
        while(i<len && s[i]==s[j]) 
            i++; 
        ans += to_string(i-j) + s[j];
    }
    return countAndSay(n-1, ans);
        
    }
    
};