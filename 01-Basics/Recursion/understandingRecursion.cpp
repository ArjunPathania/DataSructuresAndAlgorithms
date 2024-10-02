#include <bits/stdc++.h>
using namespace std;
void print_1_n(int n)
{

    if (n != 1) // base condition
    {
        print_1_n(n - 1); // recursive call
    }

    cout << n << " "; // function action
}
void print_n_1(int n)
{

    cout << n << " "; // function action

    if (n != 1) //  base condition
    {
        print_1_n(n - 1); //  recursive call
    }
}

int main()
{
    int n;
    cin >> n;
    print_1_n(n);
    cout << endl;
    print_n_1(n);
    return 0;
}