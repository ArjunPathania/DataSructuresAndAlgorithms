#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // brute force approach
        // vector<int> ans;
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     for (int j = i + 1; j < nums.size(); j++)
        //     {
        //         if ((nums[i] + nums[j]) == target)
        //         {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;
        //         }
        //     }
        // }
        // return ans;

        // using a hashMap
        unordered_map<int, int> numMap;//here the first int stores the number and the second int stores the index
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end())
            {
                return {numMap[complement], i}; // 
            }
            numMap[nums[i]] = i; // storing the index of the element
        }
        return {};
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
        int target;
        cin >> target;
        vector<int> nums(N);
        for (int i = 0; i < N; i++)
        {
            cin >> nums[i];
        }
        Solution obj;
        vector<int> ans = obj.twoSum(nums, target);
        for (int i = 0; i < 2; i++)
        {
            cout << ans[i] << " ";
        }
    }

    return 0;
}