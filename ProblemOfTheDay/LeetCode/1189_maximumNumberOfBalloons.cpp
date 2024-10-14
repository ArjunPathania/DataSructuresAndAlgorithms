#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    // Method to calculate the maximum number of "balloon" words that can be formed
    int maxNumberOfBalloons(string text)
    {
        // unordered_map<char, int> map;
        // int balloon = 0;

        // // Count the frequency of each character in the text
        // for (auto ch : text)
        // {
        //     map[ch]++;
        // }

        // // Check how many times we can form the word "balloon"
        // while (map['b'] >= 1 && map['a'] >= 1 && map['l'] >= 2 && map['o'] >= 2 && map['n'] >= 1)
        // {
        //     map['b'] -= 1;
        //     map['a'] -= 1;
        //     map['l'] -= 2;
        //     map['o'] -= 2;
        //     map['n'] -= 1;
        //     balloon++;
        // }

        // return balloon;

        //another interesting approachp0
        vector<int> v(26, 0);
        for (int i = 0; i < text.size(); i++)
        {
            v[text[i] - 'a']++;
        }
        int mini = v[1];             // for b
        mini = min(v[0], mini);      // for a
        mini = min(v[11] / 2, mini); // for l
        mini = min(mini, v[14] / 2); // for o
        mini = min(mini, v[13]);
        return mini;
    }

    // Solve method to handle input/output for test cases
    void solve()
    {
        string text;
        cin >> text;                               // Input for the text
        cout << maxNumberOfBalloons(text) << "\n"; // Output the result
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
