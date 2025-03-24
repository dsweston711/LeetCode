#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        // get input string as character vector
        std::vector<char> letters(s.begin(), s.end());

        // for (char numeral : letters) {
        //     cout << numeral;
        // }

        // cout << endl;

        // return number
        int result = 0;

        // iterate over every element. at least 7 cases
        for (int i = 0; i < (int)letters.size(); i++) {
            switch (letters[i]) {
                case 'I': result += 1; break;
                case 'V': result += 5; if (i > 0 && letters[i - 1] == 'I') result -= 2; break;
                case 'X': result += 10; if (i > 0 && letters[i - 1] == 'I') result -= 2; break;
                case 'L': result += 50; if (i > 0 && letters[i - 1] == 'X') result -= 20; break;
                case 'C': result += 100; if (i > 0 && letters[i - 1] == 'X') result -= 20; break;
                case 'D': result += 500; if (i > 0 && letters[i - 1] == 'C') result -= 200; break;
                case 'M': result += 1000; if (i > 0 && letters[i - 1] == 'C') result -= 200; break;
            }
        }
        return result;
    }
};