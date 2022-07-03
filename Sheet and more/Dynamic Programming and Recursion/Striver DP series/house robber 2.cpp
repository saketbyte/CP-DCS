class Solution {
public:
    // The logic is to solve for 1 to n-1 and then from 0 to n-2. And then take maximum of the two so that we have our circle traced
    // in the two possible cases with various combinations to give the maximum sum individually. 
    
    int solve(vector<int> &house)
    {
        
        int n = house.size();
        
        int prev = house[0];
        int prev2 = 0;
        
        for( int i = 1; i<n; i++ )
        {
            int take = house[i];
            if(i>1) take +=prev2;
            
            
            int not_take = 0 + prev;
            
            int curr = max(take, not_take);
            prev2 = prev;
            prev = curr;
            
        }
        return prev;
            
    }
    int rob(vector<int>& nums) {
        vector<int> temp1, temp2;
        int n = nums.size();
        
        if(n==1) return nums[0];
        
        for(int i =0;i<n;i++)
        {
            if(i!=0)
                temp1.push_back(nums[i]);
            if(i!=n-1)
                temp2.push_back(nums[i]);
        }
        
        return max(solve(temp1),solve(temp2));
        
    }
};