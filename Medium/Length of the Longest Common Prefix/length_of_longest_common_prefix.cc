#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int longestCommonPrefix(vector<int> &arr1, vector<int> &arr2)
    {
        unordered_set<string> prefixSet;

        // store all prefixes from arr2
        for (int num : arr2)
        {
            string s = to_string(num);
            string prefix = "";
            for (char c : s)
            {
                prefix += c;
                prefixSet.insert(prefix);
            }
        }
        // check arr1 prefixes
        int maxPrefixLen = 0;

        for (int num : arr1)
        {
            string s = to_string(num);
            string prefix = "";
            for (int i = 0; i < (int)s.size(); ++i)
            {
                prefix += s[i];
                if (prefixSet.count(prefix))
                {
                    maxPrefixLen = max(maxPrefixLen, (int)prefix.size());
                }
            }
        }
        return maxPrefixLen;
    }
};

int main()
{
    vector<int> arr1 = {12345, 12467, 99999};
    vector<int> arr2 = {12400, 12000, 12999};

    Solution sol;
    int res = sol.longestCommonPrefix(arr1, arr2);
    cout << res << endl;
    return 0;
}