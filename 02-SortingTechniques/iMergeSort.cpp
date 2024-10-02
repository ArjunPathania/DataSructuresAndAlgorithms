#include <bits/stdc++.h>
using namespace std;
vector<int> mergedArray(100);
// Solution class
class Solution
{
public:
    // A simple iterative merge sort
    void iMergeSort(vector<int> &arr, int N)
    {

        int p, i, l, mid, h;
        for (int p = 2; p <= N; p *= 2)
        {
            for (int i = 0; i + p - 1 < N; i += p)
            {
                l = i;
                h = i + p - 1;
                mid = l + (h - l) / 2;
                merge(arr, l, mid, h);
            }
        }
        if ((p / 2) < N)
        {
            merge(arr, 0, p / 2, N - 1);
        }
    }

    // merge function to merge two lists of a single array
    void merge(vector<int> &arr, int low, int mid, int high)
    {

        int i, j, k;
        i = low, j = mid + 1, k = low;
        while (i <= mid && j <= high)
        {
            if (arr[i] < arr[j])
            {
                mergedArray[k++] = arr[i++];
            }
            else
            {
                mergedArray[k++] = arr[j++];
            }
        }
        for (; i <= mid; i++)
        {
            mergedArray[k++] = arr[i];
        }
        for (; j <= high; j++)
        {
            mergedArray[k++] = arr[j];
        }

        for (int i = low; i <= high; i++)
        {
            arr[i] = mergedArray[i];
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
        obj.iMergeSort(arr, N);

        // Output the sorted array
        cout << "After iMergeSort sort \n";
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}