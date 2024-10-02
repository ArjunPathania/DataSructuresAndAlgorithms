#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    vector<int> hash(vector<char> &arr)
    {
        int n = arr.size();

        // Assuming the maximum value in arr is 100 (adjust based on the problem)
        int max_val = *max_element(arr.begin(), arr.end());
        vector<int> hashTable(max_val + 1, 0); // Initialize hashTable to accommodate max value

        for (int i = 0; i < n; i++)
        {
            hashTable[arr[i]] += 1; // Count occurrences of each element
        }

        return hashTable;
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
        cin >> N;
        vector<char> arr(N);

        // Input array elements
        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> result = obj.hash(arr);

        // Output the hash table
        for (int i = 0; i < result.size(); ++i)
        {
            if (result[i] > 0)
            {
                cout << char(i) << " appears " << result[i] << " times\n";
            }
        }
    }

    return 0;
}
