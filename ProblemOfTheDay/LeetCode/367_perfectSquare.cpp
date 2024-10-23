#include<bits/stdc++.h>
using namespace std;

// Solution class
class Solution {
public:
    bool isPerfectSquare(int num)
    {
        int low = 0;
        int high = num;
        int mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            long long square = (long long)mid * mid;
            if (square == num)
            {
                return true;
            }
            else if (square > num)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return false;
    }
};

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
   /* cout << "Enter number of test cases: ";*/
    cin >> T;

    while (T--) {
        int N;
        if (!(cin >> N)) {
            cerr << "Insufficient inputs for the number of test cases specified." << endl;
            return 1; // Exit with error code
        }
        Solution obj;
        if (obj.isPerfectSquare(N)){
            cout << "Perfect square\n";
        }
        else{
            cout << "Not a perfect square\n";
        }
    }

    return 0;
}