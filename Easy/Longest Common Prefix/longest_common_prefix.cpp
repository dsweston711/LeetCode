#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    string getPrefix(const string &a, const string &b)
    {
        int i = 0;
        while (i < (int)a.size() && i < (int)b.size() && a[i] == b[i])
        {
            ++i;
        }
        return a.substr(0, i);
    }

    string longestCommonPrefix(vector<string> &strs)
    {
        vector<string> dp(strs.size());

        for (string str : strs)
        {
            cout << str << endl;
        }

        dp[0] = strs[0];
        cout << dp[0] << endl;

        for (int i = 1; i < (int)strs.size(); ++i)
        {
            dp[i] = getPrefix(dp[i - 1], strs[i]);
        }
        return dp[strs.size() - 1];
    }
};

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    Solution sol;
    cout << sol.longestCommonPrefix(strs) << endl;
    return 0;
}