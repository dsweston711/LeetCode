#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    double binarySearch(vector<int> &A, vector<int> &B, int total_length)
    {
        int m = A.size();
        int n = B.size();

        int low = 0, high = m;

        while (low <= high)
        {
            int i = (low + high) / 2;
            int j = (total_length + 1) / 2 - i;

            int A_left = (i == 0) ? INT_MIN : A[i - 1];
            int A_right = (i == m) ? INT_MAX : A[i];
            int B_left = (j == 0) ? INT_MIN : B[j - 1];
            int B_right = (j == n) ? INT_MAX : B[j];

            if (A_left <= B_right && B_left <= A_right)
            {
                if (total_length % 2 == 0)
                {
                    return (max(A_left, B_left) + min(A_right, B_right)) / 2.0;
                }
                else
                {
                    return max(A_left, B_left);
                }
            }
            else if (A_left > B_right)
            {
                high = i - 1;
            }
            else
            {
                low = i + 1;
            }
        }

        return 0.0; // should never reach here
    }

    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int nums1_length = (int)nums1.size();
        int nums2_length = (int)nums2.size();
        int total_length = nums1_length + nums2_length;
        double median;

        // base case: both arrays are empty
        if (total_length == 0)
        {
            return 0;
        }

        // base case: one array is empty
        // return the median of the other array
        if (nums1_length == 0)
        {
            if (nums2_length % 2 == 0) // even
            {
                int mid = nums2_length / 2;
                median = (nums2[mid - 1] + nums2[mid]) / 2.0;
                return median;
            }
            else // odd
            {
                median = nums2[nums2_length / 2];
                return median;
            }
        }
        else if (nums2_length == 0)
        {
            if (nums1_length % 2 == 0) // even
            {
                int mid = nums1_length / 2;
                median = (nums1[mid - 1] + nums1[mid]) / 2.0;
                return median;
            }
            else // odd
            {
                median = nums1[nums1_length / 2];
                return median;
            }
        }

        // binary search of partition
        // first parameter is smaller, second is larger
        if (nums1_length <= nums2_length)
        {
            return binarySearch(nums1, nums2, total_length);
        }
        else
        {
            return binarySearch(nums2, nums1, total_length);
        }
    }
};