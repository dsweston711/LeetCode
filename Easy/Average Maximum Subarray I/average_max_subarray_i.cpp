#include <vector>
#include <iostream>

using namespace std;

// highest possible average you can get from a set of numbers

// iterate through with a sliding window, save current max average and
// and compare for each iteration of the window
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        // beginning indices for sliding window
        int kstart = 0;
        int kend = k - 1;

        // imagine k = 4, and n = 10. we start at 0 and end at 4
        // for each iteration, start +=1 and end += 1
        // calculate beginning window sum
        // from there, subtract start value and add end value for each iteration
        // that is, new end and new start values

        double sum = 0.0;
        for (int i = 0; i <= kend; i++)
        {
            sum += nums[i];
        }

        double max_avg = sum / (double)k;
        for (int i = k; i < (int)nums.size(); i++)
        {
            sum -= nums[kstart];
            sum += nums[i];
            kstart++;
            double avg = sum / (double)k;
            max_avg = max(max_avg, avg);
        }
        return max_avg;
    }
};