#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    int factorial(int n)
    {
        // Add your solution here
        if (n <= 2)
        {
            return n;
        }
        else
        {
            return n * factorial(n - 1);
        }
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
        Solution obj;
        cout << obj.factorial(N) << endl;
    }

    return 0;
}