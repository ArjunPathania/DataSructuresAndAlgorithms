#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    void bubbleSort(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int swapped = 0;
            for (int j = 0; j < n - i - 1; j++) // j runs till n-i-1 because for i = n-1 -> j+1 becomes n which will give segmentaion error
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swapped = 1;
                }
            }
            if (!swapped)
            {
                break;
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

        cout << "Before bubble sort ";
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        Solution obj;
        obj.bubbleSort(arr);

        cout << "After bubble sort ";
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}