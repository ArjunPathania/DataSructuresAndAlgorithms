#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Declaration
    int A[5];

    // Traversal
    for (int i = 0; i < 5; i++)
    {
        cout << &(A[i]) << " ";
    }
    cout << "\n";

    // Static vs dynamic
    int staticArr[5];
    int *p;
    p = new int[5]; // Use new instead of malloc in C++

    // Accessing
    p[0] = 4;
    p[1] = 13;
    p[2] = 17;
    p[3] = 34;
    p[4] = 19;

    // Traversing
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    cout << "\n";
    delete[] p;

    // Increase the size of an array
    int *P = new int[5];
    P[0] = 19;
    P[1] = 4;
    P[2] = 13;
    P[3] = 17;
    P[4] = 34;

    int *Q = new int[10];
    for (int i = 0; i < 5; i++)
    { // Copy only 5 elements
        Q[i] = P[i];
    }

    delete[] P; // Free memory
    P = Q;
    Q = NULL;

    // 2D Arrays
    int A_2D[3][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12}};
    // Traversing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A_2D[i][j] << " ";
        }
        cout << endl;
    }

    // Using stack and heap
    int *B_2D[3];
    for (int i = 0; i < 3; i++)
    {
        B_2D[i] = new int[4];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            B_2D[i][j] = i + j + 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << B_2D[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    { // Correctly free each row
        delete[] B_2D[i];
    }

    // Using double pointer and heap
    int **C_2D = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        C_2D[i] = new int[4];
    }

    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            count++;
            C_2D[i][j] = count;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << C_2D[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory for C_2D
    for (int i = 0; i < 3; i++)
    {
        delete[] C_2D[i];
    }
    delete[] C_2D;

    return 0;
}
