#include <vector>
using namespace std;

std::vector<int> dp(1000, -1);

class Solution {
    public:
        int fib(int n) {
            if ( n <= 1) return n;
            if (dp[n] != -1) return dp[n];
            return dp[n] = fib(n-1) + fib(n-2);
        }
    };