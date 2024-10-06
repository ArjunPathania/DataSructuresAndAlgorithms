#include <bits/stdc++.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10;
    cout << a
         << endl;
    int *p; // = &a;
    p = &a;
    cout << "Using the pointer printing the value of variable "
         << *p
         << endl;
    int A[] = {1, 2, 3, 4, 5};
    int *p1;
    p1 = A; // p1 =&A[0] --> both work just fine
    cout << "Using the pointer printing the value of array "
         << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(p1 + i) << " ";
    }
    cout << endl;

    // allocating heap memory using pointers
    int *p2;
    // p2 = (int *)malloc(5 * sizeof(int));
    p2 = new int[5]; // same as the above malloc  malloc is for c , new int[size] is for cpp
    p2[0] = 10;
    p2[1] = 15;
    p2[2] = 20;
    p2[3] = 25;
    p2[4] = 30;
    cout << "Using the pointer to access heap memory"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        // cout << p2[i] << " ";
        cout << *(p2 + i) << " ";
    }
    cout << endl;
    int *p_int;
    char *p_char;
    float *p_float;
    double *p_double;
    struct rectangle *p_struct;

    cout << sizeof(p_int) << endl;
    cout << sizeof(p_char) << endl;
    cout << sizeof(p_float) << endl;
    cout << sizeof(p_double) << endl;
    cout << sizeof(p_struct) << endl;

    delete[] p2; // always delete dynamic memory allocation delete[] used in cpp
    // free(p2); used in C language

    return 0;
}