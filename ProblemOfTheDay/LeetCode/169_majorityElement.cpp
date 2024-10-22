#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Brute Force Solution
    int majorityElementBruteForce(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[i] == nums[j])
                    cnt++;
            }
            if (cnt > n / 2)
                return nums[i];
        }
        return -1;
    }

    // Divide and Conquer Solution
    int find_major(vector<int> &nums, int l, int r)
    {
        if (l == r)
            return nums[l];

        int m = (l + r) / 2;
        int left_ans = find_major(nums, l, m);
        int right_ans = find_major(nums, m + 1, r);

        if (left_ans == right_ans)
            return left_ans;

        int left_cnt = 0, right_cnt = 0;
        for (int i = l; i <= r; i++)
        {
            if (nums[i] == left_ans)
                left_cnt++;
            if (nums[i] == right_ans)
                right_cnt++;
        }

        return (left_cnt >= right_cnt) ? left_ans : right_ans;
    }

    int majorityElementDivideAndConquer(vector<int> &nums)
    {
        int n = nums.size();
        return find_major(nums, 0, n - 1);
    }

    // Hash Map Solution
    int majorityElementHashMap(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (auto i : nums)
            mp[i]++;
        for (auto it : mp)
            if (it.second > n / 2)
                return it.first;

        return -1;
    }

    // Sorting based solution
    // returns element even if majority element does not exist
    int majorityElementSortingSolution(vector<int> &nums){
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }

        // Bit Manipulation Solution
        // returns element even if majority element does not exist
        int majorityElementBitManipulation(vector<int> &nums)
    {
        int ans = 0, n = nums.size();
        for (int i = 0; i < 32; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (1 << i & nums[j])
                    cnt++;
            }
            if (cnt > n / 2)
                ans |= 1 << i;
        }
        return ans;
    }

    // Boyer-Moore Voting Algorithm
    // returns element even if majority element does not exist
    int majorityElementBoyerMoore(vector<int> &nums)
    {
        int ele = nums[0], cnt = 0;

        for (auto it : nums)
        {
            if (it != ele)
            {
                cnt--;
                if (cnt == 0)
                {
                    ele = it;
                    cnt = 1;
                }
            }
            else
                cnt++;
        }
        return ele;
    }

    void solve()
    {
        int N;
        cin >> N; 
        vector<int> nums(N);
        for (int i = 0; i < N; i++)
        {
            cin >> nums[i];
        }

        // Choose which solution to use
        int result = majorityElementSortingSolution(nums); // Change this to call other methods if needed
        cout << result << "\n";
    }

};

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; 

    while (T--)
    {
        Solution obj;
        obj.solve(); 
    }

    return 0;
}
