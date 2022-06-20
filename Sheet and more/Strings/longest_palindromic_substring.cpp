class Solution {
  public:
    string longestPalin (string s) {
        
        int n = s.size();
        
        bool A[n][n];
        
        memset(A,0, sizeof(A));
        
        int max_length = 1;
        int start = 0;
        
        for(int i = 0; i< n;i++)
            A[i][i] = true;
            
        for(int i =0; i<n - 2 +1; i++)
        if(s[i] == s[i+1]){
            A[i][i+1] = true;
            if(max_length!=2)
            start = i;
            max_length = 2;
        }
        
        
        for( int k = 3; k <=n; k++)
        {
            
            for( int i = 0; i<n-k+1; i++)
            {
                int j = i+(k-1);
                
                
                if(A[i+1][j-1] && s[i] == s[j]){
                    A[i][j] = true;
                
                if(k>max_length){
                start = i;
                max_length = k;
                }
                }
            }
        }
        
        
        return s.substr(start, max_length);
        

    }
};