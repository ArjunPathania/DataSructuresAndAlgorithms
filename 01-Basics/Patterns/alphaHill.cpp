#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            if (i >= j)
            {
                cout << char(65 +i -j);
            }
            else
            {

                cout << " ";
            }
        }
        for (int j = i; j >= 0; j--)
        {
            cout << char(65 + j);
        }
        cout << endl;
    }

    return 0;
}