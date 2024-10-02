#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    unsigned long long sumOfSeries(unsigned long long n)
    {
        // Add your solution here
        // long long t1 = pow(n, 2);
        // long long t2 = pow(n + 1, 2); // this works
        // return (t1 * t2) / 4;

        // Add your solution here
        // if (n == 1)
        // {
        //     return 1;
        // }
        // else
        // {
        //     return pow(n, 3) + sumOfSeries(n - 1);  //Overflow,Recursion Depth,Preformace issues
        // }

        unsigned long long sum = 0;
        for (int i = 1; i <= n; ++i)
        {
            unsigned long long cube = (unsigned long long)i * i * i; // this works
            sum += cube;
        }
        return sum;
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
        long long result = obj.sumOfSeries(N);
        cout << result << endl;
    }

    return 0;
}
