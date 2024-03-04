class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());               // sort the token 
        int s = 0;                                       // Initialize the Score
        int l = 0, r = tokens.size() - 1;              // Left and Right pointer 
        while (l <= r) { 
            if (power >= tokens[l]) {                // If the remaining power is greater than or equal to the smallest token
                power -= tokens[l];                 // Reduce the Power 
                s++;                               // Increase the score
                l++;                              // Move the left pointer to the right.
              
            } 
            else if (s > 0 && l<r) {                  // If the current score is positive, consider trading tokens for power.
                power += tokens[r];           // increase the power
                s--;                         // Decrease the score.
                r--;                        // Move the right pointer to the left.
            } 
            else {
                return s;                  // exit the loop if neither condition is met
            }
        }

        return s;
    }
};