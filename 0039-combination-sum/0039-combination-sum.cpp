class Solution {
public:
    
    vector<vector<int>> ans;
    
    void recursive(vector<int> arr, int n, int sum, int curr, int i, vector<int> sub)
    {
        if(i==n){
            if(sum==curr)
            {
                ans.push_back(sub);
          
            }
            
            return;
        }
        // for(auto it: sub) cout<<it<<" ";
        // cout<<endl;
        
        if(curr<=sum)
        {
            // curr = curr+ arr[i];
            sub.push_back(arr[i]);
            recursive(arr,n,sum,curr+ arr[i],i,sub);
            // curr -=arr[i];
            sub.pop_back();
        }
        recursive(arr,n,sum,curr,i+1,sub);
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> sub;
        recursive(candidates,candidates.size(),target,0,0,sub);
        
//         for(int i =0;i<1<<n;i++)
//         {
//             for(int j =0; j<n;j++)
//             {
//                 if(i && 1<<j) 
                    
                
//             }
//         }
        
        return ans;
    }
};