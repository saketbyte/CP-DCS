class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& f, vector<int>& arr) {
        
        vector<int> ans;
        unordered_map<int,int> mp;
        
        stack<int> s;
        for(int i = 0;i<arr.size();i++)
        {
            
            while(!s.empty() && arr[s.top()]<arr[i])
            {
                int idx = s.top();
                mp[arr[idx]] = arr[i];
                s.pop();
            }               
               s.push(i);

        }
        
        for(int element: f)
        {
            ans.push_back(mp.count(element)?mp[element]:-1);
        }
        
        return ans;
    }
};