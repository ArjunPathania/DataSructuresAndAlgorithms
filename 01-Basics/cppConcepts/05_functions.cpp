#include <bits/stdc++.h>
using namespace std;
int add(int a, int b)
{
    int c = a + b;
    return c;
}
void swap_pass_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap_pass_by_address(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap_pass_by_reference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Solution code goes here
    int x = 10;
    int y = 20;
    int z = add(x, y);
    cout << z << endl;
    int a = 100;
    int b = 200;

    // pass by value
    cout << "before swap (by value) a: " << a << " b: " << b << endl;
    swap_pass_by_value(a, b);
    cout << "after swap (by value) a: " << a << " b: " << b << endl;

    // pass by address
    cout << "before swap (by address) a: " << a << " b: " << b << endl;
    swap_pass_by_address(&a, &b);
    cout << "after swap (by address) a: " << a << " b: " << b << endl;

    // pass by reference
    cout << "before swap (by reference) a: " << a << " b: " << b << endl;
    swap_pass_by_reference(a, b);
    cout << "after swap (by reference) a: " << a << " b: " << b << endl;

    return 0;
}