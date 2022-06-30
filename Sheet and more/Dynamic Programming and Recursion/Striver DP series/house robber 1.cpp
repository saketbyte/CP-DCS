/* 
So the problem that it resolves is,  we have two choices- pick or not pick.

RECURSIVE APPRAOCH : 
     F(INDEX)
     {
        IF INDEX == 0
        RETURN a[0];

        pick = a[index] + f(index -2);

        not_pick = 0 + f(index -1);

        return max(pick, not_pick)
     }

     that is we can have two choices - pick current and pick prev to prev element to make sure we have no adjacent pick ups.
                                     - or we can leave the current element and pick the previous one to again have no adjacent picked or left element.
*/

class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;
        
        for(int i =0;i<n;i++)
        {
            int take = nums[i];
            if(i>1)
                take+=prev2;
            
            int notTake = 0 + prev;
            
            int currSum = max(take, notTake);
            
            prev2 = prev;
            prev = currSum;
            
        }
        
        return prev;
        
    }
};