class Solution {
public:
    
    bool isDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
        return true;
    return false;
}
    
    
void addToStack(int rep, string a, stack<char> &stk)
{
    for(int i =0; i<rep;i++ )
    {
        for(int j = 0; j<a.length();j++)
        {
            stk.push(a[j]);
        }
    }
}
    
    string decodeString(string s) {
        int n = s.length();
        
        stack <char> stk;
        char x;
        
        for(int i=0;i<n;i++){
            x = s[i];
            
            if(x!=']' )
                stk.push(x);
            else
            {
                string sbstr = "";
                while(stk.top()!='[')
                {
                    sbstr= stk.top() +sbstr;
                    stk.pop();
                }
                stk.pop();
                string dig ="";
                while( !stk.empty() && isDigit(stk.top())){
                    dig= stk.top() +dig;
                    stk.pop();
                }
                // cout<<dig<<endl;
                addToStack(stoi(dig),sbstr, stk);
                
            }
        }
        
        string ans = "";
        while(!stk.empty()){
            ans = stk.top() +ans;
            stk.pop();
        }
        if(!isDigit(char(ans[0])))
            return ans;
        else
            return "";
        
    }
};