#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int copy = n;
    int count = 0;
    while (copy != 0)
    {
        copy /= 10;
        count++;
    }

    cout << "The Number "<< n <<" has "<< count<<" digits";
    return 0;
}