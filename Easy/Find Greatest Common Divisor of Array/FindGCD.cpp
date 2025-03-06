#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int findGCDHelper(int x, int y)
    {
        if (x == y)
        {
            return x;
        }
        else if ((x % 2) == 0 && (y % 2) == 0)
        {
            return 2 * findGCD((x / 2), (y / 2));
        }
        else if ((x % 2) == 0)
        {
            return findGCD((x / 2), y);
        }
        else if ((y % 2) == 0)
        {
            return findGCD(x, (y / 2));
        }
        else if (x > y)
        {
            return findGCD(((x - y) / 2), y);
        }
        else
        {
            return findGCD(x, ((y - x) / 2));
        }
    }

    int findGCD(vector<int> &nums)
    {
        int smallestVal = INT_MAX;
        int largestVal = INT_MIN;

        for (int i = 0; i < (int)nums.size(); i++)
        {
            if (nums[i] < smallestVal)
            {
                smallestVal = nums[i];
                // debug
                cout << "smallest value: " << smallestVal << endl;
            }

            if (nums[i] > largestVal)
            {
                largestVal = nums[i];
                // debug
                cout << "largest value: " << largestVal << endl;
            }
        }

        // debug
        cout << "================" << endl;
        cout << "smallest value: " << smallestVal << endl;
        cout << "largest value: " << largestVal << endl;

        cout << "calling findGCD..." << endl;
        return findGCDHelper(smallestVal, largestVal);
    }
};

// int main()
//{
//     Solution sol;
//     std::vector<int> inputVector = {2, 5, 6, 9, 10};
//     cout << sol.readInput(inputVector);
//     return 0;
// }