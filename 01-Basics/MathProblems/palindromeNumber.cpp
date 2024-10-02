#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 0)
    { // Negative numbers are not palindromes
        cout << "Not a Palindrome";
        return 0;
    }

    // Find the divisor to extract the first digit
    int divisor = 1;
    int temp = n;
    while (temp >= 10)
    {
        temp /= 10;
        divisor *= 10;
    }

    while (n != 0)
    {
        int firstDigit = n / divisor;
        int lastDigit = n % 10;

        // If first and last digit are not the same, it's not a palindrome
        if (firstDigit != lastDigit)
        {
            cout << "Not a Palindrome";
            return 0;
        }

        // Remove the first and last digit
        n = (n % divisor) / 10;
        divisor /= 100; // Since we removed two digits
    }

    cout << "Palindrome";
    return 0;
}
