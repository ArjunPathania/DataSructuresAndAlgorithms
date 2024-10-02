#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    void selectionSort(vector<int> &arr)
    {
        // Add your solution here
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int indexMin = i; // this index is where th least value from  the unsorted array is to be placed
            for (int j = i; j < n; j++)
            {
                if (arr[j] < arr[indexMin])
                {
                    indexMin = j; // index j has the current least value (selection)
                }
            }
            if (indexMin != i) // confirming that the current index isn't the least element
            {
                swap(arr[indexMin], arr[i]); // swapping the least element with the element with the least index
            }
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
        obj.selectionSort(arr);

        // After Sorting
        cout << "After Sorting \n";
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}