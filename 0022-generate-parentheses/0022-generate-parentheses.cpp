class Solution {
public:
    
    vector<string> ans;
    
    
    void solve(string &s,int remainingOpen, int remainingClose)
    {
        if(remainingOpen==0 && remainingClose == 0)
        {
            ans.push_back(s);
            return;
        }
        
        if(remainingOpen>0)
        {
            s.push_back('(');
            solve(s,remainingOpen-1, remainingClose);
            s.pop_back();
        }
        
        if(remainingClose>0)
        {
            if(remainingOpen<remainingClose)
            {
                 s.push_back(')');
            solve(s,remainingOpen, remainingClose-1);
                s.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        
        string s;
        solve(s,n,n);
        return ans;
    }
};