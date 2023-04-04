class Solution {
public:
 
    int partitionString(string s) {
        int flag = 0;
        int i = 0, ans = 1;
        while(i < s.size()){
            int n = s[i] - 'a';
            if( flag & (1<<n) ) {
                flag = 0;
                ans++;
            }
            flag = flag | (1<<n);
            i++;
        }
        return ans;
    }
};