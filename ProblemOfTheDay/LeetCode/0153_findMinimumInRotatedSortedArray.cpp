#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        //brute force approach
        // int n = nums.size();
        // for (int i = 1; i <= n; i++)
        // {
        //     if ((nums[i % n]) < nums[(i - 1) % n])
        //     {
        //         return nums[i % n];
        //     }
        // }
        // return nums[0];

        // binary search based approach
        if (nums.empty())
        {
            throw invalid_argument("Array is empty");
        }
        int low = 0, high = nums.size() - 1;
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[high])
                low = mid + 1;
            else
                high = mid;
        }
        return nums[low];
    }
};

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    /* cout << "Enter number of test cases: ";*/
    cin >> T;

    while (T--)
    {
        int N;
        if (!(cin >> N))
        {
            cerr << "Insufficient inputs for the number of test cases specified." << endl;
            return 1; // Exit with error code
        }
        vector<int> arr(N);

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        Solution obj;
        cout << obj.findMin(arr) << " ";
    }

    return 0;
}