#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;

    // brute force // this solution takes a lot of time especially if 1 <= x, y <= 10^9 takes x and y as long long

    // int gcd = 0;
    // for (int i = 1; i <= min(x, y); i++)
    // {
    //     if (x % i == 0 && y % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }
    // cout << "The GCD of " << x << " " << y << " is : " << gcd << endl;
    // int lcm = (x * y) / gcd;
    // cout << "The LCM of " << x << " " << y << " is : " << lcm;

    // Optimization 1: Using the Euclidean algorithm to compute GCD
    long long a = x, b = y; // Store original values for LCM calculation
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    long long gcd = a; // The GCD is stored in 'a' after the loop ends

    cout << "The GCD of " << x << " " << y << " is : " << gcd << endl;

    // Compute LCM using the relation: LCM(x, y) = (x * y) / GCD(x, y)
    long long lcm = (x * y) / gcd;
    cout << "The LCM of " << x << " " << y << " is : " << lcm << endl;

    return 0;
}