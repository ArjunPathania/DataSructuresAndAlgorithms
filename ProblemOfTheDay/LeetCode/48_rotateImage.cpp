#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        // using extra space
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> ans(col, vector<int>(row));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                ans[j][col - i - 1] = matrix[i][j]; 
            }
        }
        matrix = ans;
    }

    void solve()
    {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n));

        // Reading the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }

        // Rotate the matrix
        rotate(matrix);

        // Output the rotated matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
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
        Solution obj;
        obj.solve();
        cout << "\n";
    }

    return 0;
}
