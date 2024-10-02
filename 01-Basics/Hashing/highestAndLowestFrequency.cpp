#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    pair<int, int> highestAndLowestFrequency(vector<int> &arr)
    {
        // Add your solution here
        unordered_map<int, int> freq;

        // Count the frequency of each element
        for (int num : arr)
        {
            freq[num]++;
        }

        // Variables to store the highest and lowest frequencies
        int highestFreq = INT_MIN, lowestFreq = INT_MAX;

        // Traverse the frequency map
        //because freq is a map we use &entry
        for (auto &entry : freq)
        {
            highestFreq = max(highestFreq, entry.second);
            lowestFreq = min(lowestFreq, entry.second);
        }

        return {highestFreq, lowestFreq};
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

        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        Solution obj;
        pair<int, int> highLow = obj.highestAndLowestFrequency(arr);
        cout << "Highest Frequency: " << highLow.first << ", Lowest Frequency: " << highLow.second << endl;
    }

    return 0;
}