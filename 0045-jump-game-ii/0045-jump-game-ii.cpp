class Solution {
public:
    int jump(vector<int>& nums) {
         if(nums[0] == 0)
            return 0 ;
            
        
        int jumps = 0, farthest = 0, currEnd = 0;
        
        for(int i =0;i<nums.size()-1;i++)
        {
            farthest = max(i+nums[i], farthest);
            
            if(farthest >= nums.size()-1)
                return jumps+1;
            
            if(i==farthest)
                return -1;
            
            if(i==currEnd)
            {
                jumps++;
                currEnd = farthest;
            }
        }
            
            return jumps ;
    }
};