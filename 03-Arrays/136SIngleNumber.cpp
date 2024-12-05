#include<bits/stdc++.h>
using namespace std;

// Solution class
class Solution {
public:
    int singleNumber(vector<int> &nums)
    {
        // Add your solution here
        int result = 0;
        for (auto x : nums)
        {
            result = result ^ x;
        }
        return result;
    }
};

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
   /* cout << "Enter number of test cases: ";*/
    cin >> T;

    while (T--) {
        int N;
        if (!(cin >> N)) {
            cerr << "Insufficient inputs for the number of test cases specified." << endl;
            return 1; // Exit with error code
        }
        vector<int> nums(N);
        for (int i = 0; i < N; i++)
        {
            cin >> nums[i];
        }
        Solution obj;
        cout << "Single Number " << obj.singleNumber(nums);
    }

    return 0;
}