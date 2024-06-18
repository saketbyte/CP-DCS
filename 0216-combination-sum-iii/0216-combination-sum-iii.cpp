class Solution {
public:
    
void findCombinations(int start, int k, int n, std::vector<int>& combination, std::vector<std::vector<int>>& result) {
    // Base case: if k is 0 and n is 0, we have found a valid combination
    if (k == 0 && n == 0) {
        result.push_back(combination);
        return;
    }
    
    // If k or n becomes negative, there's no valid combination
    if (k < 0 || n < 0) {
        return;
    }
    
    // Try to pick the number 'start'
    if (start <= 9) {
        // Pick 'start'
        combination.push_back(start);
        findCombinations(start + 1, k - 1, n - start, combination, result);
        // Not pick 'start'
        combination.pop_back();
        findCombinations(start + 1, k, n, combination, result);
    }
}
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> sub;
        findCombinations(1, k, n, sub, ans);
        return ans;
    }
};