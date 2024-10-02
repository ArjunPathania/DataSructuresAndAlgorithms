#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    void insertionSort(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = 1; i < n; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && key < arr[j])
            {
                arr[j + 1] = arr[j];
                --j;
                // j is decreasing at the end of the loop
                // because of this the correct position to put the key element will be j+1
            }
            arr[j + 1] = key;
        }
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
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        // Before Sorting
        cout << "Before Sorting \n";
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        Solution obj;
        obj.insertionSort(arr);

        // After Sorting
        cout << "After Sorting \n";
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl
             << endl;
    }

    return 0;
}