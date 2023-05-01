class Solution {
public:
    double average(vector<int>& salary) {
        
        int n = salary.size();
        double sum =0;      
        int mx=-1,mn=INT_MAX;
        for(int i =0;i<n;i++)
        {
            
            sum+=salary[i];
            mx=max(mx,salary[i]);
            mn = min(mn,salary[i]);
            
        }
        
        sum= sum-mx-mn;
        return sum/(n-2);
    }
};