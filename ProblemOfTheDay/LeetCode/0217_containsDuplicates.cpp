#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> seen;
        for (int num : nums)
        {
            if (seen[num] >= 1)
            {
                return true;
            }
            seen[num]++;
        }
        return false;
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

        if (containsDuplicate(nums))
        {
            cout << "True"; 
        }
        else
        {
            cout << "False";
        }
    }
};

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T; 
    cin >> T;

    while (T--)
    {
        Solution obj;
        obj.solve();
        cout << "\n";
    }

    return 0;
}
