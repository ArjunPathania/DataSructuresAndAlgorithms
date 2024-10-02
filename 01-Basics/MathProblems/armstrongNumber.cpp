#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int digitCount = 0;
    int copy = n, final = n;
    while (n != 0)
    {
        n = n / 10;
        digitCount++;
    }
    int result = 0;
    while (copy != 0)
    {
        int lastDigit = copy % 10;
        result = result + pow(lastDigit, digitCount);
        copy = copy / 10;
    }
    if (result == final)
    {
        cout << final << " is an armstrong Number";
    }
    else
    {
        cout << final << " is not an armstrong Number";
    }

    return 0;
}