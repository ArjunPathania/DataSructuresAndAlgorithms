#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;
    A[4] = 5;
    for (int x : A)
    {
        cout << x << " ";
    }
    cout << endl;
    int n;
    cin >> n;
    int B[n]; // C++ standard compiler does not allow for this ,GCC compiler provides an extension to supports variable length array.
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    for (int x : B)
    {
        cout << x << " ";
    }
    cout
        << endl
        << sizeof(A)
        << " "
        << sizeof(B)
        << endl;
    // Dynamic memory allocation
    // data_type* array_name = new data_type[size];
    int *C = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> C[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl
         << sizeof(C) 
         << endl;       // This will return size of the pointer, not the array
    cout << n * sizeof(int) << endl; // This prints the size of the allocated memory in bytes

    // delete[] array_name; always deallocate dynamic memory
    delete[] C;

    return 0;
}