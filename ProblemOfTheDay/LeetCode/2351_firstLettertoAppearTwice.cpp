#include<bits/stdc++.h>
using namespace std;

// Solution class
class Solution {
public:
    char repeatedCharacter(string s)
    {
        // hashHamp Based solution
        unordered_map<char, int> seen;
        for (auto i : s)
        {
            seen[i]++;
            if (seen[i] >= 2)
            {
                return i;
            }
        }
        return -1;
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
        string str;
        if (!(cin >> str)) {
            cerr << "Insufficient inputs for the number of test cases specified." << endl;
            return 1; // Exit with error code
        }
        Solution obj;
        cout << obj.repeatedCharacter(str) << "\n";
    }

    return 0;
}