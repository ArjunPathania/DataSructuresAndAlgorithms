#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    long long SumOfSeries(long long n)
    {
        // Add your solution here
        if (n == 1)
        {
            return 1;
        }
        else
        {
            return n + SumOfSeries(n - 1);
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
        long long N;
        if (!(cin >> N))
        {
            cerr << "Insufficient inputs for the number of test cases specified." << endl;
            return 1; // Exit with error code
        }
        Solution obj;
        long long result = obj.SumOfSeries(N);
        cout << result << endl;
    }

    return 0;
}