#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    int factorial(int n)
    {
        // Handle base case where factorial(0) = 1
        if (n == 0 || n == 1)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }

    int combinationFormula(int n, int r)
    {
        // Calculate the combination C(n, r) = n! / (r! * (n - r)!)
        int t1 = factorial(n);
        int t2 = factorial(n - r);
        int t3 = factorial(r);
        return t1 / (t2 * t3);
    }

    //recursive combination formula
    int itrC(int n,int r){
        if (r==0|| r==n){
            return 1;
        }
        else{
            return itrC(n - 1, r - 1) + itrC(n - 1, r);
        }
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
        int N, R;
        if (!(cin >> N >> R))
        {
            cerr << "Error: Invalid input for N and R." << endl;
            return 1; // Exit with error code
        }

        Solution obj;
        int result = obj.itrC(N, R);
        cout << "Combination C(" << N << ", " << R << ") = " << result << endl;
    }

    return 0;
}
