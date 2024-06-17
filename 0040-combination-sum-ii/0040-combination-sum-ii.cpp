class Solution {
public:

    void generate(vector<vector<int>> &ans, vector<int> &sub, vector<int> &nums, int i, int curr, int sum )
    {         
        if(i==nums.size())
        {
            if(sum == curr)
            {
                ans.push_back(sub);
                
            }
            return;
        
        }
        
        if(curr + nums[i] <= sum) {
        sub.push_back(nums[i]);
    
        generate(ans, sub, nums,i+1, curr+nums[i], sum);
        sub.pop_back();
        }
        while (i + 1 < nums.size() && nums[i] == nums[i + 1])
        {
            i++;
            if(nums[i]>sum) break; 
        }
        
        generate(ans, sub, nums, i+1, curr, sum);
    }
    

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> sub;
        
        sort(candidates.begin(), candidates.end());
        generate(ans, sub, candidates, 0, 0, target);
        return ans;
    }
};