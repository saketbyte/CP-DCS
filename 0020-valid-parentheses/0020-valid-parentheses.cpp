class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stk;
        bool flag = true;
        for(int i = 0;i<s.length();i++)
        {
            char x = s[i];
            if( x == '(' || x == '{' || x == '[')
                stk.push(x);
            else if(!stk.empty())
            {
                if( x == ')' && stk.top() == '(' )
                    stk.pop();
                else if( x == '}' && stk.top() == '{' )
                    stk.pop();
                else if( x == ']' && stk.top() == '[' )
                    stk.pop();
                else
                {   
                    flag = false;
                    break;
                }
            }
            else{flag = false;
                    break;}
                
        }
        
        if(!stk.empty() || !flag )
            return false;
        else
            return true;
        
        
        
        
    }
};