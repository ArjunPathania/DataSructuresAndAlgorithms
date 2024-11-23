#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &arr)
    {
        int i = 0;
        for (int j = 1; j < arr.size(); j++)
        {
            if (arr[i] != arr[j])
            {
                i++;
                arr[i] = arr[j];
            }
        }
        return i + 1;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
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
        int ans = obj.removeDuplicates(arr);
        for (int i = 0; i < ans; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
