class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a){
        vector<vector<int>> ans;
        int n = a.size();
        if(n<2)
            return a;
        sort(a.begin(), a.end(), [](auto x , auto y)->bool{
         return x[0] < y[0];
        });
        
        int l = a[0][0], r = a[0][1];

        for(int i=1;i<n;i++){
            if(a[i][0] <= r)
                r = max(r, a[i][1]);
            else{
                ans.push_back({l, r});
                r = a[i][1];
                l = a[i][0];
            }
        }
        ans.push_back({l, r});
        return ans;
    }
};