#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    vector<int> hash(vector<int> &arr)
    {
        int n = arr.size();

        // Assuming the maximum value in arr is 100 (adjust based on the problem)
        int max_val = *max_element(arr.begin(), arr.end());
        // std::max_element(start,end,compare)  returns an iterator to the largest element in the range. If there are more than one such element, then it points to the first one. that is whay iwe are converting that iterator to its integer value by using * operator which gives the value stored at the iterator passed by max_element() 

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
        vector<int> arr(N);

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
                cout << i << " appears " << result[i] << " times\n";
            }
        }
    }

    return 0;
}
