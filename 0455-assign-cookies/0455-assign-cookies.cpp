class Solution {
public:
    
    
int min(int a, int b, int c) {
    int smallest = a; 

    if (b < smallest) 
        smallest = b; 
    if (c < smallest) 
        smallest = c; 
    

    return smallest; 
}
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
       
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        
        int cookie =0, want =0, ans = 0;
        
        while(cookie<s.size() && want<g.size())
        {
            if(g[want]<=s[cookie]) {
                ans++, cookie++, want++;
            }
            else {
                cookie++;
            }
        }
     
        // int ans = min(want,g.size(),s.size());
        
        return ans;
    }
};