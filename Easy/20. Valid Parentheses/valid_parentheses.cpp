#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

class Solution
{
public:
    bool isValid(std::string s)
    {
        // test for parity
        if ((int)s.size() % 2 != 0)
        {
            return false;
        }

        // tried counting parentheses, but ran into issue with the last test
        // found out about stack
        stack<char> stack;
        for (char c : s)
        {
            switch (c)
            {
            case '(':
                stack.push(c);
                break;
            case '{':
                stack.push(c);
                break;
            case '[':
                stack.push(c);
                break;
            case ')':
                if (stack.empty() || stack.top() != '(')
                {
                    return false;
                }
                stack.pop();
                break;
            case ']':
                if (stack.empty() || stack.top() != '[')
                {
                    return false;
                }
                stack.pop();
                break;
            case '}':
                if (stack.empty() || stack.top() != '{')
                {
                    return false;
                }
                stack.pop();
                break;
            }
        }
        return stack.empty();
    }
};

int main()
{
    Solution sol;
    string s1 = "[[()]]";      // true
    string s2 = "{[{[{(}]}]}"; // false
    string s3 = "";            // true
    string s4 = "([))";        // false
    string s5 = "([)";         // false
    string s6 = "([)]";        // false

    std::cout << std::boolalpha; // print bools as true/false

    std::cout << "Test 1: " << sol.isValid(s1) << std::endl;
    std::cout << "Test 2: " << sol.isValid(s2) << std::endl;
    std::cout << "Test 3: " << sol.isValid(s3) << std::endl;
    std::cout << "Test 4: " << sol.isValid(s4) << std::endl;
    std::cout << "Test 5: " << sol.isValid(s5) << std::endl;
    std::cout << "Test 6: " << sol.isValid(s6) << std::endl;
};