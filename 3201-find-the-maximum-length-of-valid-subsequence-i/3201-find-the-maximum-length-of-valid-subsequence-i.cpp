class Solution {
public:
     int maximumLength(vector<int>& nums) {
        int n = nums.size();
        int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
        int f1 = 0;

        // check for {odd, odd, odd..., odd} && {even, even, even..., even}
        for(int i = 0; i<n; i++){
            if(nums[i]%2==0){
               a1++; 
            }else{
               a2++;
            }  
        }
        
        // check for {even, odd, even...}
        for(int i = 0; i<n; i++){
            if(nums[i]%2 == 0 && f1 == 0){
                a3++;
                f1 = 1;
            }else if(nums[i]%2==1 && f1 ==1){
                a3++;
                f1 = 0;
            }
        }
        
        f1=0;
        // check for {odd, even, odd...}
        for(int i = 0; i<n; i++){
            if(nums[i]%2 == 1 && f1 == 0){
                a4++;
                f1 = 1;
            }else if(nums[i]%2==0 && f1 ==1){
                a4++;
                f1 = 0;
            }
        }
        
        // Take max of all possibilities
        int ans = max(max(a1, a2), max(a3, a4));
        
        return ans;
    }
};