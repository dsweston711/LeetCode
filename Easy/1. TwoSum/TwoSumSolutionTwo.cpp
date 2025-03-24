#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Given an array of integers nums and an integer target,
// return indices of the two numbers such that they add up to target.

// assume each input has exactly one solution

// input: nums = [2,7,11,15], target = 9
// output: [0,1]
// explanation: because nums[0] + nums[1] == 9, we return [0,1]

// more examples
// input: nums = [3,2,4], target = 6
// output: [1,2]

// input: nums [3,3], target = 6
// output: [0,1]

class Solution
{

public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> numberMap; // stores {number, index}
        vector<int> outputArray;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // if complement exists in the map, return the indices
            if (numberMap.find(complement) != numberMap.end()) {
                return {numberMap[complement], i};
            }

            // store the current number's index
            numberMap[nums[i]] = i;
        }
        return {}; // return empty vector if no pair is found
    }
};