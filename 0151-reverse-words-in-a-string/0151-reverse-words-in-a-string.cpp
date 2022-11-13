class Solution {
public:
    
    void rev(string &s, int l, int r){
        while(l<r)
            swap(s[l++],s[r--]);
    }
    
    string reverseWords(string s) {
        
        int  n = s.length();
        
        rev(s,0,n-1);
      
        
        int i =0;
        int space =0;
        int num_letters =0;
   
        
        while(i<n)
        {
            space = i;
        
            while(space<n && s[space] == ' ')
                space++;
            
            num_letters = 0;
            
            while(space<n && s[space] != ' ')
            {
                space++;
                num_letters++;
            }
            
            if(space>n)
                break;
            space--;
            
            if(i==0)
                rev(s, i, space);
            else
            rev(s,i+1,space);
            
            if(num_letters==0)
                i=space+1;
            else
                i=i+num_letters;
            
                
        }
        
         space=n-1;
        while(space>=0 && s[space]==' '){
            space--;
            s.pop_back();
        }
        return s;
        

        
    }
};