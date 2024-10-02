#include <bits/stdc++.h>
using namespace std;
vector<int> findSecondLargestElement(int arr[], int n)
{
    int large = INT_MIN;
    int small = INT_MAX;
    int second_large = INT_MIN;
    int second_small = INT_MAX;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        // Update largest and second largest
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }

        // Update smallest and second smallest
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

    ans.push_back(second_large);
    ans.push_back(second_small);
    return ans;
}

int main()
{
    int arr1[] = {2, 5, 1, 3, 0};
    int n = 5;
    vector<int> ans = findSecondLargestElement(arr1, n);
    cout << "The second largest and second smallest element in the array is: " << *(ans.begin()) << " " << *(ans.end() - 1) << endl;

    int arr2[] = {8, 10, 5, 7, 9};
    n = 5;
    vector<int> ans2 = findSecondLargestElement(arr1, n);
    cout << "The second largest and second smallest element in the array is: " << *(ans.begin()) << " " << *(ans.end() - 1) << endl;

    return 0;
}