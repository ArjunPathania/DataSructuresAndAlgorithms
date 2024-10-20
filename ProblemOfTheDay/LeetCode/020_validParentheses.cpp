#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        unordered_map<char, char> matchingPair = {
            {')', '('},
            {']', '['},
            {'}', '{'}};

        for (auto ch : s)
        {
            if (matchingPair.find(ch) != matchingPair.end())
            {
                if (!stack.empty() && stack.top() == matchingPair[ch])
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                stack.push(ch);
            }
        }

        return stack.empty();
    }

    void solve()
    {
        string s;
        cin >> s;
        if (isValid(s))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
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
