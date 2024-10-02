#include <bits/stdc++.h>
using namespace std;

// Solution class
// works for integer range i.e fact*i <10^8
class Solution
{
public:
    vector<int> factorial(int n)
    {
        int fact = 1;
        vector<int> ans;
        for (int i = 1;; i++)
        {
            fact = fact * i;
            if (fact > n)
            {
                break;
            }
            ans.push_back(fact);
        }
        return ans;
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
        vector<int> fact = obj.factorial(N);
        for (auto nums : fact)
        {
            cout << nums << " ";
        }
        cout << endl;
    }

    return 0;
}

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++
// class Solution
// {
// public:
//     vector<long long> factorialNumbers(long long n)
//     {
//         // Write Your Code here
//         vector<long long> ans;
//         long long fact = 1;
//         for (long long i = 1;; i++)
//         {
//             fact = fact * i;
//             if (fact > n)
//             {
//                 break;
//             }
//             ans.push_back(fact);
//         }
//         return ans;
//     }
// };

// //{ Driver Code Starts.
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long N;
//         cin >> N;
//         Solution ob;
//         vector<long long> ans = ob.factorialNumbers(N);
//         for (auto nums:ans)
//         {
//             cout << nums << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends