#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // Upper (left part)
        if (i == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << n << " ";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (i > j)
                {
                    cout << n - j << " ";
                }
                else
                {
                    cout << n - i << " ";
                }
            }
        }

        // Upper (left part)
        if (i == 0)
        {
            for (int j = 1; j < n; j++)
            {
                cout << n << " ";
            }
        }
        else
        {
            for (int j = n - 2; j >= 0; j--)
            {
                if (j >= i)
                {
                    cout << n - i << " ";
                }
                else
                {
                    cout << n - j << " ";
                }
            }
        }
        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        // lower (left part)
        for (int j = 0; j < n - 1; j++)
        {
            if (j <= i)
            {
                cout << n - j << " ";
            }
            else
            {
                cout << n - i << " ";
            }
        }

        // lower (right part)
        if (i == n - 1)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << n - j << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (j <= i)
                {
                    cout << n - j << " ";
                }
                else
                {
                    cout << n - i << " ";
                }
            }
        }
        cout << endl;
    }

    // chatGPT Solution
    // Upper half including middle
    for (int i = 0; i < n; i++)
    {
        // Left part of the pattern
        for (int j = 0; j < n; j++)
        {
            cout << n - min(i, j);
        }

        // Right part of the pattern
        for (int j = n - 2; j >= 0; j--)
        {
            cout << n - min(i, j);
        }

        cout << endl;
    }

    // Lower half excluding middle
    for (int i = n - 2; i >= 0; i--)
    {
        // Left part of the pattern
        for (int j = 0; j < n; j++)
        {
            cout << n - min(i, j);
        }

        // Right part of the pattern
        for (int j = n - 2; j >= 0; j--)
        {
            cout << n - min(i, j);
        }

        cout << endl;
    }

    return 0;
}