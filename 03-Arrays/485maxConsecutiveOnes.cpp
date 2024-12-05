#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        // Add your solution here
        int length = 0;
        int maxLength = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                length += 1;
                if (length > maxLength)
                {
                    maxLength = length;
                }
            }
            else
            {
                length = 0;
            }
        }
        return maxLength;
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
        vector<int> nums(N);
        for (int i = 0; i < N; i++)
        {
            cin >> nums[i];
        }

        Solution obj;
        cout << "Max Consecutive Ones " << obj.findMaxConsecutiveOnes(nums);
    }

    return 0;
}