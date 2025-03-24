#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            for (string str : strs) {
                cout << str << endl;
            }
        }
    };

    int main() {
        vector<string> strs = {"flower", "flow","flight"};
        Solution sol;
        sol.longestCommonPrefix(strs);
        return 0;
    }