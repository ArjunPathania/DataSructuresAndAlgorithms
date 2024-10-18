#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int mySqrt(int x)
    {
        if(x==1){
            return 1;
        }
        long l = 0;
        long h = x/2;
        long m;
        while (l <= h)
        {
            m = l + (h - l) / 2;
            if (m * m == x)
            {
                return m;
            }
            else if (m * m < x)
            {
                l = m + 1;
            }
            else
            {
                h = m - 1;
            }
        }
        return h;
    }
    void solve()
    {
        int N; 
        cin >> N;

        cout << mySqrt(N);
    }
};

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        Solution obj;
        obj.solve();  
        cout << "\n";
    }

    return 0;
}
