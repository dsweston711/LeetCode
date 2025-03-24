#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    double average(vector<int> &salary)
    {
        double calculated_average = 0;    // calculated average
        int min = INT_MAX;                // minimum value found
        int max = INT_MIN;                // maximum value found
        double total = 0;                 // sum of all values
        double n = (double)salary.size(); // size of array

        // iterate once over salaries
        for (int i = 0; i < (int)salary.size(); i++)
        {
            // check for minimum and maximum
            if (salary[i] < min)
            {
                min = salary[i];
            }

            if (salary[i] > max)
            {
                max = salary[i];
            }

            // sum all values
            total += salary[i];
            cout << total << endl;
        }

        cout << max << endl;

        cout << min << endl;

        total = total - min - max;

        cout << total << endl;

        calculated_average = total / (n - 2);

        return calculated_average;
    }
};

int main()
{
    vector<int> salary = {4000, 3000, 1000, 2000};
    Solution sol;
    cout << sol.average(salary) << endl;
    return 0;
}