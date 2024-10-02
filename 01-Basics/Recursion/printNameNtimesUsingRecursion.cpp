#include <iostream>
using namespace std;

class Solution
{
public:
    // Function to print numbers from 1 to N using recursion
    void printName(int N)
    {
        if (N != 1)
        {
            printName(N - 1);
        }
        cout << "arjun" << " ";
    }
};

int main()
{
    // Fast input-output handling
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    // Taking number of test cases
    // cout << "Enter the number of test cases: ";
    cin >> T;

    while (T--)
    {
        int N;
        // Input for each test case
        // cout << "Enter a number: ";
        cin >> N;

        Solution obj;
        // Calling the function to print numbers
        obj.printName(N);
        cout << "\n";
    }

    return 0;
}
