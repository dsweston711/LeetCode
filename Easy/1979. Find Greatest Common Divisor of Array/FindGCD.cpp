#include <vector>
#include <numeric>
#include <climits>

using namespace std;

class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int smallestVal = INT_MAX;
        int largestVal = INT_MIN;

        for (int i = 0; i < (int)nums.size(); i++)
        {
            if (nums[i] < smallestVal)
            {
                smallestVal = nums[i];
            }

            if (nums[i] > largestVal)
            {
                largestVal = nums[i];
            }
        }

        return gcd(smallestVal, largestVal);
    }
};