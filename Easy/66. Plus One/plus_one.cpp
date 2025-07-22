#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int current_digit = digits.size() - 1; // index in vector, starting at "ones place"

        // if the least significant digit isnt 9, add 1
        if (digits[current_digit] != 9)
        {
            digits[current_digit] = digits[current_digit] + 1;
            return digits;
        }

        // else, go "up" the number until you reach a number that isnt 9
        while (current_digit >= 0 && digits[current_digit] == 9)
        {
            digits[current_digit] = 0;
            --current_digit;
        }

        // make a new vector with the most significant digit being 1 (worse case)
        if (current_digit == -1)
        {
            std::cout << "need a new place!" << endl;
            digits.insert(digits.begin(), 1);
            return digits;
        }
        else
        {
            digits[current_digit] = digits[current_digit] + 1;
            return digits;
        }
    }
};

void printTest(vector<int> &test)
{
    for (int digit : test)
    {
        std::cout << digit << ' ';
    }
    std::cout << std::endl;
};

main()
{
    Solution sol;

    vector<int> test1 = {1, 2, 0, 0, 1};
    vector<int> test1result = sol.plusOne(test1);
    vector<int> test2 = {9, 9};
    vector<int> test2result = sol.plusOne(test2);
    vector<int> test3 = {1, 0, 9};
    vector<int> test3result = sol.plusOne(test3);
    vector<int> test4 = {};
    vector<int> test4result = sol.plusOne(test4);
    vector<int> test5 = {4, 3, 0, 9, 2, 6, 9, 9, 9, 9};
    vector<int> test5result = sol.plusOne(test5);

    printTest(test1result);
    printTest(test2result);
    printTest(test3result);
    printTest(test4result);
    printTest(test5result);

    return 0;
};
