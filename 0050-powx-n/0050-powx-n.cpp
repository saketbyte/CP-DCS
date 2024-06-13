class Solution {
public:
    double mypow(double x, int n, double ans) {
        if (n == 0) {
            return ans; // Base case
        }

        if (n % 2 == 1) {
            return mypow(x, n - 1, ans * x);
        } else {
            return mypow(x * x, n / 2, ans);
        }
    }

    double myPow(double x, int n) {
        double ans = 1;
        if (x == 0 || x == 1) {
            return x;
        }
        if (n < 0) {
            ans *= 1 / x;
            n = -(n + 1);
            x = 1 / x;
        }
        return mypow(x, n, ans);
    }
};