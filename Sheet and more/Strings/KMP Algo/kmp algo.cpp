#include<bits/stdc++.h>

using namespace std;

    /**
     * Compute temporary array to maintain size of suffix which is same as prefix
     * Time/space complexity is O(size of pattern)
     */
    vector<int> LPS(string s) {
	    
    vector<int> lpss(s.size(),0);
            int i=0,j=1;
            
            while(j<s.size())
            {
                if(s[j]==s[i])
                {
                    lpss[j]=i+1;
                    j++;
                    i++;
                }
                else{
                    if(i != 0){
                        i=lpss[i-1]; 
                    }
                    else{
                        j++;
                    }
                }
            }
            return lpss;
	}
    
    /**
     * KMP algorithm of pattern matching.
     */
    bool KMP(string text, string pattern){
        
        vector<int> lps = LPS(pattern);
        int i=0;
        int j=0;
        while(i < text.size() && j < pattern.size()){
            if(text[i] == pattern[j]){
                i++;
                j++;
            }else{
                if(j!=0){
                    j = lps[j-1];
                }else{
                    i++;
                }
            }
        }
        if(j == pattern.size()){
            return true;
        }
        return false;
    }
        
int main(){
        
        string str = "abcxabcdabcdabcy";
        string subString = "abcdabcy";

        cout<<KMP(str,subString);
       
        
    }
