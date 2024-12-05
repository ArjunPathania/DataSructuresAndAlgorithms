#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Using Hashmap
    int missingNumberHashmap(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (auto i : nums)
        {
            mp[i]++;
        }
        for (int i = 0; i <= nums.size(); i++)
        {
            if (mp[i] == 0)
            {
                return i;
            }
        }
        return -1; // This should not happen
    }

    // Using Bitwise operators
    int missingNumberBitwise(vector<int> &nums)
    {
        int result = 0;
        int counter = 0;
        for (int i = 0; i <= nums.size(); i++)
        {
            if (i < nums.size())
            {
                result ^= nums[i];
            }
            result ^= counter;
            counter++;
        }
        return result;
    }

    // Using Auxiliary Vector
    int missingNumberAuxVector(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> v(n + 1, -1);
        for (int i = 0; i < nums.size(); i++)
        {
            v[nums[i]] = nums[i];
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == -1)
            {
                return i;
            }
        }
        return 0; // This should not happen
    }

    // Using Sum of All Elements
    int missingNumberSum(vector<int> &nums)
    {
        int n = nums.size();
        int totalSum = (n * (n + 1)) / 2;
        return totalSum - accumulate(nums.begin(), nums.end(), 0);
    }

    // Using Sorting
    int missingNumberSorting(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (nums[0] != 0)
            return 0;
        if (nums[n - 1] != n)
            return n;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != i)
            {
                return i;
            }
        }
        return 0; // This should not happen
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

        cout <<"Missing Number "<<obj.missingNumberBitwise(nums);
    }
    return 0;
}