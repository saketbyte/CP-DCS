class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        // creating min heap
        priority_queue<int, vector<int>, greater<int>> max_k;
        
        // Preparing frequency table
        for(auto i : nums)
        counts[i]++;
        
        // Iterating through the frequency table
        for(auto & i : counts) {
            // pushing elements in heap
            max_k.push(i.second);
            cout<<i.second;
            if(max_k.size() > k) max_k.pop();
             // Size of the min heap is maintained at equal to or below k by
            // eliminating the least frequent elements.
        }
        vector<int> res;
        for(auto & i : counts) {
            if(i.second >= max_k.top()) res.push_back(i.first);
        }
        return res;
    }
};