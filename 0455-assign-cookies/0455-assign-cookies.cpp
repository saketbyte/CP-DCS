class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int ans = 0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        
      for(int i = 0; i<g.size();i++)
      {
         int want = g[i];
          for(int j = 0;j<s.size();j++)
          {
             if(want<=s[j])
             {
                 ans++;
                 s[j]=0;
                 break;
             }
          }
      }
        
        return ans;
    }
};