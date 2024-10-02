#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n)
{
    for (int i = 0; i < n-2; i++)
    {
        if (arr[i]>arr[i+1])
        {
            return 0;
        }
        
    }
    return 1;   
}
int main()
{
    int arr[] = {2,1,3,4,5};
    int n = 5;

    if(check(arr,n)){
        cout<<"Array is Sorted";
    }
    else{
        cout << "Array is Unsorted";
    }
    return 0;
}