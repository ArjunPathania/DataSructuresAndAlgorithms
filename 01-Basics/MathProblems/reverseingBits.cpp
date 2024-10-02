#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = 0;
    for (int i = 0; i < 32; i++) // Now running for full 32 bits
    {
        // int lastBit = n & 1;
        // result = result | lastBit;
        // if (i != 31) // Do not shift on the final iteration
        //     result = result << 1;
        // n = n >> 1;

        int lastBit = (n >> i) & 1;                //  checking the ith bit
        result = result | lastBit << (32 - i - 1);
         // setting the (n-i)th bit effectivelt reversing the bits i.e if in n things something is at ith place from the beginnig it is at the (n-i -1) th palce at the end in 0-based indexing 
    }
    cout << result;
    return 0;
}
/*
Why i < 31 and not i < 32?
The key point is in the line:
result = result << 1;
This shifts the bits of result left after processing each bit. If the loop were to run for 32 iterations (i < 32), the last shift would incorrectly add an extra zero bit to the result, making it 33 bits in total. By stopping at 31 iterations (i < 31), the last bit is correctly placed without this extra shift.

What happens if you use i < 32?
If you change the loop to run from i = 0 to i < 32, the final shift would push the bits one position too far, leading to an incorrect result. The last shift would leave an extra 0 in the least significant bit of result.
*/