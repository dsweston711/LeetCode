#include <vector>
#include <cmath>

using namespace std;

class Solution
{
public:
    int binarySearch(vector<int> &nums, int target, int start, int end)
    {
        if (start > end) // target not found
            return -1;

        const int MIDDLE = std::floor((start + end) / 2);

        if (target == nums[MIDDLE])
        {
            return MIDDLE;
        }

        // search right
        if (nums[MIDDLE] < target)
        {
            return binarySearch(nums, target, MIDDLE + 1, end);
        }

        // search left
        if (nums[MIDDLE] > target)
        {
            return binarySearch(nums, target, start, MIDDLE - 1);
        }
        return -1; // should never reach here
    }

    int search(vector<int> &nums, int target)
    {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
};