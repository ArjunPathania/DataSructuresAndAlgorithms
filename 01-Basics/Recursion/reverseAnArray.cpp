#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    vector<int> reverse(vector<int> &arr, int start, int end)
    {
        // Method 1 - Using an extra array


        // Iterative Method
        //  int start = 0, end = arr.size() - 1;

        // // Reverse the array
        // while (start < end)
        // {
        //     swap(arr[start], arr[end]);
        //     start++;
        //     end--;
        // }

        // Recursive Method
        if (start < end)
        {
            swap(arr[start], arr[end]);
            reverse(arr, ++start, --end);
        }

        return arr; // Return the reversed array
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

        vector<int> arr(N);

        // Input array elements
        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> result = obj.reverse(arr, 0, arr.size() - 1);

        // Output the reversed array
        for (int i = 0; i < N; ++i)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
