#include <bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
struct test
{
    int a[5];
    int n;
};
int area(struct Rectangle r1)
{
    return r1.length * r1.breadth;
}

void change_length(struct Rectangle *r1, int l)
{
    r1->length = l;
}
void test(struct test t1)
{
    for (int i = 0; i < t1.n; i++)
    {
        t1.a[i] += 10;
        cout << t1.a[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    struct Rectangle r = {10, 5};
    cout << area(r) << endl; // passing by value

    struct Rectangle r1 = {50, 10};
    cout << "r1 length before change " << r1.length << endl;
    change_length(&r1, 55); // passing by address
    cout << "r1 length after change " << r1.length << endl;

    struct test t = {{1, 2, 3, 4, 5}, 5};
    cout << "struct array before passing (by value)" << endl;
    for (int i = 0; i < t.n; i++)
    {
        cout << t.a[i] << " ";
    }
    cout << endl
         << "struct array in other function" << endl;
    test(t);
    cout << "struct array after passing(by value)" << endl;
    for (int i = 0; i < t.n; i++)
    {
        cout << t.a[i] << " ";
    }

    return 0;
}