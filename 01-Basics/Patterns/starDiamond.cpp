#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 1; j--)
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
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > 1; j--)
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
        for (int k = i; k > 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

        return 0;
}