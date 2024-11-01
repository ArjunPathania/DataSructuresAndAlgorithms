#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
    vector<int> F; // Vector for memoization

public:
    Solution(int n) : F(n + 1, -1) {} // Constructor to initialize vector size dynamically

    // Iterative Fibonacci
    int itrfib(int n)
    {
        int t0 = 0, t1 = 1, s = 0;
        if (n <= 1)
        {
            return n;
        }
        for (int i = 2; i <= n; i++)
        {
            s = t0 + t1;
            t0 = t1;
            t1 = s;
        }
        return s;
    }

    // Recursive Fibonacci (excessive recursion)
    int rfib(int n)
    {
        if (n <= 1)
            return n;
        return rfib(n - 1) + rfib(n - 2);
    }

    // Recursive Fibonacci with memoization
    int mfib(int n)
    {
        if (n <= 1)
        {
            F[n] = n;
            return n;
        }
        if (F[n - 2] == -1)
        {
            F[n - 2] = mfib(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = mfib(n - 1);
        }
        F[n] = F[n - 1] + F[n - 2];
        return F[n];
    }

    void solve(int N)
    {
        // cout << "Iterative Fibonacci: " << itrfib(N) << "\n";
        // cout << "Recursive Fibonacci: " << rfib(N) << "\n";
        cout << "Memoized Fibonacci: " << mfib(N) << "\n";
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
        int N;
        if (!(cin >> N))
        {
            cerr << "Insufficient inputs for the number of test cases specified." << endl;
            return 1; // Exit with error code
        }

        Solution obj(N); // Initialize with dynamic size for memoization array
        obj.solve(N);
        cout << "\n";
    }

    return 0;
}
