#include <bits/stdc++.h>
using namespace std;
int findSecondLargestElement(int arr[], int n)
{
    int large = INT_MIN;
    int second_large =INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>large){
            second_large = large;
            large = arr[i];
        }else if (arr[i]>second_large && arr[i]!=large)
        {
            second_large = arr[i];
        }
        
    }
    return second_large;
}
int findSecondSmallestElement(int arr[], int n)
{
    int small = INT_MAX;
    int second_small = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }
    return second_small;
}
int main()
{
    int arr1[] = {2, 5, 1, 3, 0};
    int n = 5;
    int max = findSecondLargestElement(arr1, n);
    cout << "The second largest element in the array is: " << max << endl;
    int min = findSecondSmallestElement(arr1, n);
    cout << "The second smallest element in the array is: " << min << endl;

    int arr2[] = {8, 10, 5, 7, 9};
    n = 5;
    max = findSecondLargestElement(arr2, n);
    cout << "The second largest element in the array is: " << max << endl;
    max = findSecondSmallestElement(arr2, n);
    cout << "The second smallest element in the array is: " << max << endl;
    return 0;
}