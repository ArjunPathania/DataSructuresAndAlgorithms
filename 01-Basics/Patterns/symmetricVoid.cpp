#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = n; k > 0; k--)
        {
            if (i < k)
            {
                cout << "*";
            }
            else
            {

                cout << " ";
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i >= k)
            {
                cout << "*";
            }
            else
            {

                cout << " ";
            }
        }
        for (int j = n - 1; j >= 0; j--)
        {
            if (i >= j)
            {
                cout << "*";
            }
            else
            {

                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

// chatGPT solution

