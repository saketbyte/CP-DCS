class Solution {
public:
    
    int distance(int x, int y){
        return (x*x) + (y*y);
    }
        
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int, vector<int>>> maxHeap;
        vector<vector<int>> ans;
        
        for(auto i: points)
        {
            maxHeap.push({distance(i[0],i[1]),i});
            
            if(maxHeap.size()>k)
                maxHeap.pop();
        }
        
        while(maxHeap.size()!=0)
        {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return ans;
        
    }
};