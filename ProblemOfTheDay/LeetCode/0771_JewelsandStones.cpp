#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    // Method to calculate number of jewels in stones
    int numJewelsInStones(string jewels, string stones)
    {
        int output = 0;

        // Using sets
        set<char> jewelSet;
        for (auto ch : jewels)
        { // Iterate over 'jewels' to populate the set
            jewelSet.insert(ch);
        }
        for (auto ch : stones)
        {
            if (jewelSet.find(ch) != jewelSet.end())
            {
                output += 1;
            }
        }

        // Using extra memory approach (commented out)
        /*
        unordered_map<char, int> map;
        for (auto ch : stones) {
            map[ch] += 1;
        }
        for (auto ch : jewels) {
            output += map[ch];
        }
        */

        // Brute force approach (commented out)
        /*
        for (auto ch1 : jewels) {
            for (auto ch2 : stones) {
                if (ch1 == ch2) {
                    output += 1;
                }
            }
        }
        */

        return output;
    }

    // Solve method to handle input/output for test cases
    void solve()
    {
        string jewels, stones;
        cin >> jewels >> stones;                           // Input for jewels and stones
        cout << numJewelsInStones(jewels, stones) << "\n"; // Output the result
    }
};

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        Solution obj;
        obj.solve(); // Solve each test case
    }

    return 0;
}
