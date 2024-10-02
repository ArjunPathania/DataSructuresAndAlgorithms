#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int k = 0; k < n; k++)
        {
            if (i >= k)
            {
                cout << char(65 + k);
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