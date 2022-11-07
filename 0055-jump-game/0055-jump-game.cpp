class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        if(nums.size() == 1)
            return true;
            
        
        int jumps = 0, farthest = 0, currEnd = 0;
        
        for(int i =0;i<nums.size()-1;i++)
        {
            farthest = max(i+nums[i], farthest);
            
            if(farthest >= nums.size()-1)
                return true;
            
            if(i==farthest)
                return false;
            
            if(i==currEnd)
            {
                jumps++;
                currEnd = farthest;
            }
        }
            
            return (jumps>0) ? true : false;
        
        
    }
};