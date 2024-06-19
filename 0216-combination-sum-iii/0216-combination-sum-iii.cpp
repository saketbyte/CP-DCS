class Solution {
public:
    
    void generate(int k, int n, int start, int sum, vector<vector<int>> &ans, vector<int> &sub)
    {
        if(k==0 && n == sum)
        {
            ans.push_back(sub);
            return;
        }
        
        if(k<0 || sum>n) return;
        
        if(start<10)
        {
            sub.push_back(start);
            generate(k-1,n,start+1,sum+start,ans, sub);
            sub.pop_back();
            generate(k,n,start+1,sum,ans, sub);

        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> ans;
        vector<int> sub;
        
        generate(k,n,1,0,ans, sub);
        
        return ans;
        
    }
};