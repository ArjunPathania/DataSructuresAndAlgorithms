#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    /* My solution
    for (int i = 0; i < n; i++)
    {
        for(int j = n-1;j>=1;j--){
            if(i>=j){
                cout <<"*";
            }
            else{

                cout << " ";
            }

        }
        for (int k = 0; k <=i; k++)
        {
            cout<<"*";
        }
        cout << endl;
    }*/
   
    // Initialise 'gap' and 'stars'.
    int gap = n - 1, stars = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < gap; j++)
        {
            cout << ' ';
        }
        for (int j = gap; j < gap + stars; j++)
        {
            cout << '*';
        }

        // End the current row of the pattern.
        cout << '\n';

        gap--;
        stars += 2;
    }

    return 0;
}