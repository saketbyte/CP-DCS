class Solution {
public:
    
    vector<vector<int>> ans ;
    
    void generate(vector<int> &sub, int i, vector<int> &nums)
    {
        if(i==nums.size()) 
        {ans.push_back(sub);
            
            return;
        }

        // take case
        sub.push_back(nums[i]);
        generate(sub, i+1, nums);

        sub.pop_back();
        generate(sub,i+1,nums);

        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> subset;
        generate(subset, 0, nums);
        return ans;
        
    }
};