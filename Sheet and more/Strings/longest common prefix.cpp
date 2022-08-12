class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        
    
        int n = strs.size();
       
        
        int len = INT_MAX;
        bool flag = true;
        
        for(int i =0; i<n;i++)
        {
            int k = strs[i].size();
            if(len > k)
                len = k;
        }
         if(n==1 || len == 0)
            return strs[0];
      
        
       
        char x;
        int ptr = 0;
        
        for(int i = 0;flag;i++)
        {
            x = strs[0][i];
            for(int j = 0;j<n;j++)
            {
                
                if(x !=strs[j][i])
                {
                    ptr = i;
                    flag = false;
                    break;
                    
                }
            
            }
            
            
      
        }
   return strs[0].substr(0,ptr);
   
        
    
    }
};