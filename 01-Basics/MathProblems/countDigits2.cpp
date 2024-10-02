// Problem statement
// You are given a number ’n’.
// Find the number of digits of ‘n’ that evenly divide ‘n’.


#include <bits/stdc++.h>
    using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = int(log10(n)+1);
    // int copy = n;
    // while (n != 0)
    // {
    //     int remainder = n % 10;
    //     if (remainder != 0 && copy % remainder == 0)
    //     {
    //         count++;
    //     }
    //     n /= 10;
    // }
    cout << count;
    return 0;
}