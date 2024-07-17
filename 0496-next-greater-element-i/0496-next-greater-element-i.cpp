class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> nge(nums2.size(),-1);
        
        
        for(int i = nums2.size()-1 ;i>-1;i--)
        {
            while(!s.empty() && s.top()<=nums2[i])
                s.pop();
            
            if(s.empty()) nge[i]=-1;
            else nge[i]=s.top();
            
            s.push(nums2[i]);
        }
        
       vector<int> result;
    for (int num : nums1) {
        for (int j = 0; j < nums2.size(); ++j) {
            if (nums2[j] == num) {
                result.push_back(nge[j]);
                break;
            }
        }
    }
        return result;
    }
};