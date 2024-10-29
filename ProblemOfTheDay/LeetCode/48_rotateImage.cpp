#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        // mathamatics
        //  int n = matrix.size();
        //  Step 1: Transpose the matrix
        //  for (int i = 0; i < n; i++)
        //  {
        //      for (int j = i + 1; j < n; j++)
        //      {
        //          swap(matrix[i][j], matrix[j][i]);
        //      }
        //  }
        //  // Step 2: Reverse each row
        //  for (int i = 0; i < n; i++)
        //  {
        //      reverse(matrix[i].begin(), matrix[i].end());
        //  }

        // int row = matrix.size();
        // int col = matrix[0].size();
        // vector<vector<int>> ans(col, vector<int>(row));
        // for (int i = 0; i < row; i++)
        // {
        //     for (int j = 0; j < col; j++)
        //     {
        //         ans[j][col - i - 1] = matrix[i][j];
        //     }
        // }
        // matrix = ans;
        
        //four-way swap processing each layer
        int n = matrix.size();
        int row_start = 0, row_end = n - 1;
        while (row_start < row_end) // Process layer by layer
        {
            int col_start = row_start;
            int col_end = row_end;
            while (col_start < col_end) // Process each element in the current layer
            {
                // Save the top element
                int temp = matrix[row_start][col_start];
                // Move left to top
                matrix[row_start][col_start] = matrix[row_end - (col_start - row_start)][row_start];
                // Move bottom to left
                matrix[row_end - (col_start - row_start)][row_start] = matrix[row_end][col_end - (col_start - row_start)];
                // Move right to bottom
                matrix[row_end][col_end - (col_start - row_start)] = matrix[col_start][row_end];
                // Move top to right
                matrix[col_start][row_end] = temp;
                col_start++; // Move to the next element in the layer
            }

            row_start++;
            row_end--;
        }
    };

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
