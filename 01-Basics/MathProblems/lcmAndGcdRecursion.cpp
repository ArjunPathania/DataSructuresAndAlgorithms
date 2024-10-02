#include <bits/stdc++.h>
using namespace std;

// Recursive function to compute GCD
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}

int main()
{
    long long x, y;
    cin >> x >> y;

    // Calculate GCD using recursive function
    long long gcdValue = gcd(x, y);

    cout << "The GCD of " << x << " " << y << " is: " << gcdValue << endl;

    // Calculate LCM using the formula LCM(x, y) = (x * y) / GCD(x, y)
    long long lcmValue = (x * y) / gcdValue;
    cout << "The LCM of " << x << " " << y << " is: " << lcmValue << endl;

    return 0;
}
