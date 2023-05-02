class Solution {
public:
    int arraySign(vector<int>& nums) {
       
        int sign = 1;
        
        for(int i: nums)
        {
            if(i<0)
                sign=-sign;
            else if(i==0)
            {
                sign =0;
                break;
            }
           
        }
        
        return sign;
    }
};