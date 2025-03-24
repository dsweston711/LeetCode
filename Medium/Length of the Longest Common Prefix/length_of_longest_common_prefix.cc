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
        // create a hash set to store all prefixes of numbers in arr2
        unordered_set<string> prefixSet;

        // for each number in arr2
        for (int num : arr2)
        {
            string s = to_string(num); // convert the number to a string to access digits easily
            string prefix = "";

            // build all prefixes of the number
            for (char c : s)
            {
                prefix += c;              // add one digit at a time
                prefixSet.insert(prefix); // insert the current prefix into the set
            }
        }

        // keep track of the maximum matching prefix length found
        int maxPrefixLen = 0;

        for (int num : arr1)
        {
            string s = to_string(num); // convery the number to a string
            string prefix = "";

            // build prefixes from left to right
            for (int i = 0; i < (int)s.size(); ++i)
            {
                prefix += s[i]; // add next digit to prefix

                // if the current prefix is found in arr2's prefix set, it's a match
                if (prefixSet.count(prefix))
                {
                    maxPrefixLen = max(maxPrefixLen, (int)prefix.size());
                }
                // otherwise, we keep checking shorter prefixes (we don't break yet)
            }
        }

        // return the length of the longest common prefix found between any pair
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