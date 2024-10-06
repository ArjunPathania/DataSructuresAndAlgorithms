#include <bits/stdc++.h>
using namespace std;
int *integer_pointer_to_array(int n)
{
    int *p = new int[n];
    // int *p =(int*)malloc(n*sizeof(int));
    return p;
}
void fun(int arr[], int n) // int *arr indicates pointer to an integer i.e first element of array
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (i + 1) * (i + 1); // converting back to addresses and ading the value
    }
}
void printArray(int arr[], int n) // int arr[] indicates pointer to an array
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " "; // arr[i] works same as *(arr + i)
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int *p = integer_pointer_to_array(5);
    fun(p, 5);
    printArray(p, 5);
    return 0;
}