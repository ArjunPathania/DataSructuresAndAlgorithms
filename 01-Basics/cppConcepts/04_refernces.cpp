#include <bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10;
    int &r = a;
    cout << a << endl;
    r++;
    cout << a << endl;
    cout << r << endl;
    // int b = 21;
    // r = b; //this is assignment and not initialization a will become 21

    struct Rectangle rect = {10, 5};
    struct Rectangle *p = &rect;

    rect.length = 10;
    // accessing structures using pointers
    (*p).length = 15; // since order of precedence of . operator is higher than that of * operator we use ()
    p->length = 25;
    cout
        << rect.length
        << endl
        << (*p).length
        << endl
        << p->length
        << endl;

    // creating an object dynamically in aheap and accessing it using a pointer
    // Creating a single struct Rectangle dynamically
    struct Rectangle *p1;
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1->length = 10;
    p1->breadth = 20;

    // Creating an array of 2 Rectangle structs dynamically
    struct Rectangle *p2 = new struct Rectangle[2];

    // Assigning values to the first rectangle in the array
    p2[0].length = 15;
    p2[0].breadth = 15;

    // Assigning values to the second rectangle in the array
    p2[1].length = 25;
    p2[1].breadth = 30;
    
    // Printing the values
    cout << "p1 - Length: " << p1->length << ", Breadth: " << p1->breadth << endl;
    cout << "p2[0] - Length: " << p2[0].length << ", Breadth: " << p2[0].breadth << endl;
    cout << "p2[1] - Length: " << p2[1].length << ", Breadth: " << p2[1].breadth << endl;

    delete[] p1;
    delete[] p2;
    return 0;
}