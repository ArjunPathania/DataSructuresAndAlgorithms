#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    void quickSort(vector<int> &arr, int low, int high)
    {
        if (low < high)
        {
            // Correct partition position
            int pivot = partitionPosition(arr, low, high);
            // Sort left sub-array
            quickSort(arr, low, pivot - 1);
            // Sort right sub-array
            quickSort(arr, pivot + 1, high);
        }
    }

    int medianOfThree(vector<int> &arr, int low, int high)
    {
        int mid = low + (high - low) / 2;
        if (arr[low] > arr[mid])
            swap(arr[low], arr[mid]);
        if (arr[low] > arr[high])
            swap(arr[low], arr[high]);
        if (arr[mid] > arr[high])
            swap(arr[mid], arr[high]);
        swap(arr[low], arr[mid]); // Move median to the low position
        return arr[low];          // Return the pivot value
    }

    int partitionPosition(vector<int> &arr, int low, int high)
    {
        int pivot = medianOfThree(arr, low, high);
        int i = low + 1, j = high;

        while (i <= j)
        {
            while (i <= high && arr[i] <= pivot)
                i++;
            while (j >= low && arr[j] > pivot)
                j--;
            if (i < j)
                swap(arr[i], arr[j]);
        }

        swap(arr[low], arr[j]); // Move pivot to its correct position
        return j;               // Return the pivot's final position
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

        // Create a solution object
        Solution obj;
        obj.quickSort(arr, 0, N - 1);

        // Output the sorted array
        cout << "After quickSort sort \n";
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
