#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    // Recursive method with Horner's Rule for Taylor series expansion of e^x
    double e(double x, int n)
    {
        // static int p = 1, f = 1; // Initialize power and factorial
        // if (n == 0)
        // {
        //     return 1;
        // }
        // else
        // {
        //     int result = e(x, n - 1);
        //     p = p * x;
        //     f = f * n;
        //     return result + p / f;
        // }

        // Horner's Rule
        static double s = 1;
        if (n == 0)
            return s;
        s = 1 + (x * s) / n; 
        return e(x, n - 1);
    }

    // Iterative method for Horner's Rule
    double itre(double x, int n)
    {
        double s = 1;
        for (; n > 0; n--)
        {
            s = 1 + (x * s) / n; // Corrected Horner's Rule
        }
        return s;
    }
};

int main()
{
    // Fast IO
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
        Solution obj;
        cout << fixed << setprecision(10) << obj.e(N, 20) << "\n"; // Taylor series expansion for better precision
    }

    return 0;
}

