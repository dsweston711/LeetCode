#include <vector>
using namespace std;

std::vector<int> dp(1000, -1); // large array w -1 (not yet computed)

class Solution {
    public:
        int fib(int n) {
            if ( n <= 1) return n;
            if (dp[n] != -1) return dp[n]; // if already solved, return stored answer
            return dp[n] = fib(n-1) + fib(n-2);
        }
    };