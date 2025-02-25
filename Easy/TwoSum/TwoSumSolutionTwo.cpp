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
        for (int i = 0; i < nums.size(); i++)
        { // first iteration over
            for (int j = i + 1; j < nums.size(); j++)
            { // second iteration over
                // ensure j > i to avoid duplication
                if (nums[i] + nums[j] == target)
                { // check if target is current sum
                    return {i, j};
                }
            }
        }
        return {}; // return empty vector if no pair is found
    }
};