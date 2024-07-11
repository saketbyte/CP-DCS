class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq (26,0);
        
        for(char task : tasks){
            freq[task - 'A']++;
        }
        sort(begin(freq) , end(freq));
        
        int gaps = freq[25] - 1;
        int total_gap = gaps * n;

        for(int i=24; i>=0; i--){
            total_gap -= min(gaps,freq[i]);
        }

        return total_gap < 0 ? tasks.size() : tasks.size() + total_gap;
    }
};