class Solution {
public:
    
    
    void bt(int s, vector<int> &nums, vector<int> &curr, vector<vector<int>> &res)
    {
        // this will push back upto our current picked up element in the combination.
        res.push_back(curr);
        
        // do not forget to iterate in the loop through the nested recursion calls, for each call. NOTE.
        
        for(int i = s; i<nums.size();i++)
        {
            // this condition will always be false for the first iteration of loop, hence we will keep including the elements even if they are contiguous duplicates. OKay? That is how we will pick all the 4 even if it was [4,4,4,4,4]
            if(i>s && nums[i] == nums[i-1]) continue;            
            curr.push_back(nums[i]);
            
        // check if i < nums.size() we will be iterating in our next function call and will iterate when we will come back in the current function call.
            
            
                bt(i+1, nums, curr, res); // start here when completing iterations of next function call and pop_back from below.
            
            curr.pop_back();
        // this will ensure that the state is maintained for the next iteration when we return in the same function call  in the same function call.
            
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<std::vector<int>> result;
        vector<int> current;
        // pass all by reference. 
        bt(0, nums, current, result);
        return result;
    }
};