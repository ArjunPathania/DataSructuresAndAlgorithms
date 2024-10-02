#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Inner loop: starts from (n - i - 1) and prints until 'E'
        for (int j = n - i - 1; j < n; j++)
        {
            cout << char(65 + j); // Print characters starting from the given position
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}
