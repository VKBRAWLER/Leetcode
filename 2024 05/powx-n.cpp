class Solution {
public:
    double myPow(double x, int n) {
        if (x == 1)  return 1;
        if (n == 0) return 1;
        if (x == 0) return 0;
        if (x == -1) return (n%2 ? -1: 1);
        bool div = false;
        long m = n;
        if (m < 0) { div = true; m = m * -1; }
        double ans = 1;
        while ( m > 0) {
            if (m%2) {
                ans *= x;
                m--;
            }
            else {
                x *= x;
                m /= 2;
            }
        }
        if (div) return 1/ans;
        return ans;
    }
};