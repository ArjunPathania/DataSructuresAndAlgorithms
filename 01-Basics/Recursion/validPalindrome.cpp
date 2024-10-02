#include <bits/stdc++.h>
using namespace std;

// Solution class
class Solution
{
public:
    bool validPalindrome(string &s, int left, int right)
    {
        // Move left pointer to the next alphanumeric character
        while (left < right && !isalnum(s[left]))
        {
            left++;
        }

        // Move right pointer to the previous alphanumeric character
        while (left < right && !isalnum(s[right]))
        {
            right--;
        }

        // Base case: if pointers cross, it's a valid palindrome
        if (left >= right)
        {
            return true;
        }

        // Compare characters in a case-insensitive manner
        if (tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }

        // Recur for the remaining substring
        return validPalindrome(s, left + 1, right - 1);
    }
};

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ifstream infile("input.txt"); // Open input file
    if (!infile)
    {
        cerr << "Error opening input file." << endl;
        return 1; // Exit with error code if file is not found
    }

    int T;
    infile >> T; // Read the number of test cases

    // Ignore the newline after reading T
    infile.ignore(numeric_limits<streamsize>::max(), '\n');

    while (T--)
    {
        string str;
        getline(infile, str); // Read the string (may contain spaces)

        Solution obj;
        bool isValid = obj.validPalindrome(str, 0, str.size() - 1);
        if (isValid)
        {
            cout << "Valid Palindrome\n";
        }
        else
        {
            cout << "Not a Palindrome\n";
        }
    }

    return 0;
}
