#include <vector>

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
        return digits;
    }

    /*
     * example: x = 12322321
     * note: this works for both even and odd integers since decimals are truncated
     */

    bool numberCheck(vector<int> &digits)
    {
        for (int i = 0; i < (digits.size() / 2) - 1; i++)
        {
            int currentIndex = i;
            int complementIndex = (digits.size() - 1) - currentIndex;
            if (digits[currentIndex] != digits[complementIndex]) { // if the two numbers on each end dont match
                return false;
            }
        }
        return true;
    }

public:
    bool isPalindrome(int x)
    {
        // case 1: integer is negative
        if (x < 0)
            return false;

        // case 2: integer is 1 digit
        if (x < 10 && x >= 0)
            return true;

        // previous cases could be checked without parsing
        // parse input into vector
        vector<int> digits = parseDigits(x);

        // case 3a: integer has an even number of digits
        if (digits.size() % 2 == 0)
            return numberCheck(digits);
    }
};