#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    void moveZeroes(vector<int> &arr)
    {
        int n = arr.size();
        int i = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] != 0)
            {
                swap(arr[i], arr[j]);
                i++;
            }
        }
    }
    
    // void moveZeroes(vector<int> &arr)
    // {
    //     int n = arr.size();
    //     int i = 0;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] != 0)
    //         {
    //             i++;
    //         }
    //         if (arr[j] != 0 && i != j)
    //         {
    //             swap(arr[i], arr[j]);
    //             i++;
    //         }
    //     }
    // }
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
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        Solution obj;
        obj.moveZeroes(arr);
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}