#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int totalSum = 0;

    // Time Complexity = O(n*sqrt(n))
    // // Iterate over every number from 1 to n
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     // Find divisors of i
    //     for (int j = 1; j <= sqrt(i); j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             if (j == i / j)
    //             {
    //                 sum += j; // Perfect square, add divisor once
    //             }
    //             else
    //             {
    //                 sum += j + (i / j); // Add both divisors
    //             }
    //         }
    //     }
    //     totalSum += sum; // Add the sum of divisors of i to the total sum
    // }

    // // Time Complexity = O(n)
    // // Loop through each divisor d
    // for (int d = 1; d <= n; d++)
    // {
    //     // Add d to all its multiples
    //     totalSum = totalSum + d * (n / d);
    // }

    // Time Complexity = O(sqrt(n))
    for (int i = 1; i <= sqrt(n); ++i)
    {
        int t1 = i * (n / i - i + 1);
        int t2 = (((n / i) * (n / i + 1)) / 2) - ((i * (i + 1)) / 2);
        totalSum = totalSum + t1 + t2;
    }

    cout << "The sum of 'sumOfDivisors(i)' for all i from 1 to " << n << " is: " << totalSum << endl;

    return 0;
}
