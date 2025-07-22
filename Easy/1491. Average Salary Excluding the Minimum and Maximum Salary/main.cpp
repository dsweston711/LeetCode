#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
    double average(vector<int> &salary)
    {
        int sum = 0;

        sort(salary.begin(), salary.end());
        for (int i = 1; i < salary.size() - 1; i++)
        {
            sum += salary[i];
        }

        return (double)sum / (double)(salary.size() - 2);
    }
};

int main()
{
    vector<int> salary = {4000, 3000, 1000, 2000};
    Solution sol;
    cout << sol.average(salary) << endl;
    return 0;
}