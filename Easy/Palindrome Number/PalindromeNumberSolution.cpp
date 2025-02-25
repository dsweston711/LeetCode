#include <vector>
#include <algorithm> // need to include this for std::reverse
#include <iostream>

using namespace std;

class Solution
{

    vector<int> parseDigits(int number)
    {
        vector<int> digits;
        while (number > 0)
        {
            digits.push_back(number % 10);
            number /= 10; // number is number / 10
        }

        reverse(digits.begin(), digits.end());
        // for (int i = 0; i < (int)digits.size(); i++)
        //{
        //     cout << digits[i];
        // }
        //  cout << endl;
        //  cout << flush;
        return digits;
    }

    /*
     * example: x = 12322321
     * note: this works for both even and odd integers since decimals are truncated
     */

    bool numberCheck(vector<int> &digits)
    {
        // cout << "Number of digits: " << digits.size() << endl;
        // cout << "Checking number of iterations: " << digits.size() / 2 << endl;
        for (int i = 0; i < (digits.size() / 2); ++i) // fixed loop condition
        {
            int complementIndex = (digits.size() - 1) - i;
            // cout << "Comparing: " << digits[i] << " and " << digits[complementIndex] << endl;
            if (digits[i] != digits[complementIndex])
            { // if the two numbers on each end dont match
                // cout << "Mismatch at indices: " << i << " and " << complementIndex << endl;
                return false;
            }
        }
        return true;
    }

public:
    bool isPalindrome(int x)
    {
        // cout << "Entered isPalindrome() with x = " << x << endl;

        // case 1: integer is negative
        if (x < 0)
        {
            // cout << "false\n";
            return false;
        }

        // case 2: integer is 1 digit
        if (x < 10 && x >= 0)
        {
            // cout << "true\n";
            return true;
        }

        // previous cases could be checked without parsing
        // parse input into vector
        vector<int> digits = parseDigits(x);

        // case 3a: integer has an even number of digits
        /*
         *if (digits.size() % 2 == 0) {
         *    // return numberCheck(digits);
         *    cout << "Calling numberCheck..." << endl;
         *    if (numberCheck(digits)) {
         *        cout << "true" << flush;
         *    } else {
         *        cout << "false" << flush;
         *    }
         *}
         */

        //  ^ this has caused me so much headache
        // note to self remove all remnants of old though process if its obsolete
        // god dammit

        return numberCheck(digits);

        return false; // it should never reach here
    }
};

/* int main()
 *{
 *    Solution sol;
 *    cout << sol.isPalindrome(121) << endl;
 *    return 0;
 *}
 */