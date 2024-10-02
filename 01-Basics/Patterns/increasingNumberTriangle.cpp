#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            cout<<count;
            count++;
        }
        cout << endl;
    }
    return 0;
}