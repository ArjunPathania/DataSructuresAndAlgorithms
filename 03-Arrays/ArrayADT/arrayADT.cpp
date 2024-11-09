#include <bits/stdc++.h>
using namespace std;

template <typename T>
class ArrayADT
{
private:
    T *A;
    int size;
    int length;

public:
    // Constructor to initialize array with a given size
    ArrayADT(int size)
    {
        this->size = size;
        A = new T[size];
        length = 0;
    }

    // Destructor to free the allocated memory
    ~ArrayADT()
    {
        delete[] A;
    }

    // Method to display the array elements
    void display() const
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    // Method to append an element to the array
    void append(T value)
    {
        if (length < size)
        {
            A[length] = value;
            length++;
        }
        else
        {
            cout << "Array is full, cannot append " << value << endl;
        }
    }

    // Method to set the array elements from an external source
    void setElements(T n)
    {
        if (n > size)
        {
            cout << "Error: Number of elements exceeds array size." << endl;
            return;
        }
        length = n;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    }

    void insertElement(int idx, T x)
    {
        if (length < size)
        {
            if (idx < size)
            {
                for (int i = length; i > idx; i--)
                {
                    A[i] = A[i - 1]; // shifting elements to the right
                }
                A[idx] = x; // setting the element in its correct place
                length++;
            }
            else
            {
                cout << "Index out of range";
            }
        }
        else
        {
            cout << "Array full, cannot insert";
        }
    }
    void deleteElement(int idx)
    {
        if (idx < length)
        {
            // for (int i = idx + 1; i < length; i++)
            // {
            //     A[i - 1] = A[i];
            // }

            for (int i = idx; i < length - 1; i++)
            {
                A[i] = A[i + 1];
            }

            length--;
        }
        else
        {
            cout << "Array out of bounds";
        }
    }

    void linearSearch(T x)
    {
        // for (int i = 0; i < length; i++)
        // {
        //     if (A[i] == x)
        //     {
        //         cout << "ELement at index " << i;
        //     }
        //     else
        //     {
        //         cout << "Element not found";
        //     }
        // }

        // optimized linear search
        bool found = false;
        for (int i = 0; i < length; i++)
        {
            if (A[i] == x)
            {
                cout << "Element found at index " << i << endl;
                found = true;
                break; // Exit the loop once the element is found
            }
        }
        if (!found)
        {
            cout << "Element not found" << endl;
        }
    }

    // Getter for array data (provides const access)
    const T *getData() const
    {
        return A;
    }

    int Size() const
    {
        return size;
    }

    int Length() const
    {
        return length;
    }

    void binary_search(T x)
    {
        int low = 0;
        int high = length;
        // iterative Binary search
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (A[mid] == x)
            {
                cout << "Element " << x << " found at index " << mid << endl;
                return;
            }
            else if (x < A[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << "Element not found" << endl;
    }

    void recursiveBinarySearch(int low, int high, T x)
    {
        // // recursive binary search
        if (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (A[mid] == x)
            {
                cout << "Element found at index " << mid << endl;
                return;
            }
            else if (x < A[mid])
            {
                recursiveBinarySearch(low, mid - 1, x);
            }
            else
            {
                recursiveBinarySearch(mid + 1, high, x);
            }
        }
        else
        {
            cout << "Element not found" << endl;
        }
    }

    int get(int idx)
    {
        if (idx < length)
        {
            return A[idx];
        }
        else
        {
            cout << "Index Out of bounds";
        }
    }

    void set(int idx, T n)
    {
        if (idx < length)
        {
            A[idx] = n;
        }
        else
        {
            cout << "Index out of bounds";
        }
    }

    int max()
    {
        int maxi = INT_MIN;
        for (int i = 0; i < length; i++)
        {

            if (A[i] > maxi)
            {
                maxi = A[i];
            }
        }
        return maxi;
    }

    int min()
    {
        int mini = INT_MAX;
        for (int i = 0; i < length; i++)
        {

            if (A[i] < mini)
            {
                mini = A[i];
            }
        }
        return mini;
    }

    int sum()
    {
        T sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += A[i];
        }
        return sum;
    }

    T avg()
    {
        T sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += A[i];
        }
        T avg = sum / length;
        return avg;
    }

    void reverse()
    {
        int low = 0;
        int high = length - 1;
        while (low < high)
        {
            T temp = A[low];
            A[low] = A[high];
            A[high] = temp;
            low++;
            high--;
        }
    }

    void leftShift(int places)
    {

        for (int i = places; i < length; i++)
        {
            A[i - places] = A[i];
        }
        for (int i = length - places; i < length; i++)
        {
            A[i] = 0;
        }
    }

    void partialReverse(int low, int high)
    {
        while (low < high)
        {
            T temp = A[low];
            A[low] = A[high];
            A[high] = temp;
            low++;
            high--;
        }
    }

    void leftRotate(int places)
    {
        // int rotations = places % length;
        // while (rotations)
        // {
        //     T temp = A[0];
        //     for (int i = 0; i < length - 1; i++)
        //     {
        //         A[i] = A[i + 1];
        //     }
        //     A[length - 1] = temp;
        //     rotations--;
        // }
        places = places % length;
        partialReverse(0, places - 1);
        partialReverse(places, length - 1);
        partialReverse(0, length - 1);
    }

    void rightShift(int places)
    {

        for (int i = length - places; i >= 0; i--)
        {
            A[i + places] = A[i];
        }
        for (int i = 0; i < places; i++)
        {
            A[i] = 0;
        }
    }
    void rightRotate(int places)
    {
        // int rotations = places % length;
        // while (rotations)
        // {
        //     T temp = A[length - 1];
        //     for (int i = length - 2; i >= 0; i--)
        //     {
        //         A[i + 1] = A[i];
        //     }
        //     A[0] = temp;
        //     rotations--;
        // }
        places = places % length;
        partialReverse(0, length - 1);
        partialReverse(0, places - 1);
        partialReverse(places, length - 1);
    }

    void insertInSortedArray(T x)
    {
        if (length < size)
        {
            int i = 0;
            while (A[i] < x)
            {
                i++;
            }
            insertElement(i, x);
        }
        else
        {
            cout << "Array full, cannot insert";
        }
    }

    int isSorted()
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                return 0;
            }
        }
        return 1;
    }

    ArrayADT<T> Union(const ArrayADT<T> &other)
    {
        ArrayADT<T> result(size + other.Size());

        // Insert all elements from the first array
        for (int i = 0; i < length; i++)
        {
            result.append(A[i]);
        }

        // Insert unique elements from the second array
        for (int i = 0; i < other.Length(); i++)
        {
            bool isDuplicate = false;
            for (int j = 0; j < result.Length(); j++)
            {
                if (other.getData()[i] == result.getData()[j])
                {
                    isDuplicate = true;
                    break;
                }
            }
            if (!isDuplicate)
            {
                result.append(other.getData()[i]);
            }
        }

        return result;
    }

    ArrayADT<T> UnionForSortedSets(const ArrayADT<T> &other)
    {
        ArrayADT<T> result(size + other.Size());
        int i = 0, j = 0;

        while (i < length && j < other.Length())
        {
            if (A[i] < other.getData()[j])
            {
                result.append(A[i]);
                i++;
            }
            else if (other.getData()[j] < A[i])
            {
                result.append(other.getData()[j]);
                j++;
            }
            else // if A[i] == other.getData()[j], include only one
            {
                result.append(A[i]);
                i++;
                j++;
            }
        }

        // Add remaining elements from `A`
        while (i < length)
        {
            result.append(A[i]);
            i++;
        }

        // Add remaining elements from `other`
        while (j < other.Length())
        {
            result.append(other.getData()[j]);
            j++;
        }

        return result;
    }

    ArrayADT<T> Intersection(const ArrayADT<T> &other) const
    {
        ArrayADT<T> result(size + other.Size());

        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < other.Length(); j++)
            {
                if (A[i] == other.getData()[j])
                {
                    result.append(A[i]); // Append A[i] instead of other.getData()[i]
                    break;               // Exit inner loop once a match is found to avoid duplicates
                }
            }
        }
        return result;
    }

    ArrayADT<T> IntersectionForSortedSets(const ArrayADT<T> &other) const
    {
        ArrayADT<T> result(size + other.Size());

        int i = 0, j = 0;

        while (i < length && j < other.Length())
        {
            if (A[i] < other.getData()[j])
            {
                i++;
            }
            else if (other.getData()[j] < A[i])
            {
                j++;
            }
            else // if A[i] == other.getData()[j];
            {
                result.append(A[i]);
                i++;
                j++;
            }
        }

        return result;
    }

    ArrayADT<T> Difference(const ArrayADT<T> &other) const
    {
        ArrayADT<T> result(size + other.Size());

        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < other.Length(); j++)
            {
                if (A[i] == other.getData()[j])
                {
                    i++;
                    break;
                }
            }
            result.append(A[i]);
        }
        return result;
    }

    ArrayADT<T> DifferenceForSortedSets(const ArrayADT<T> &other) const
    {
        ArrayADT<T> result(size);

        int i = 0, j = 0;

        while (i < length && j < other.Length())
        {
            if (A[i] < other.getData()[j])
            {
                result.append(A[i]);
                i++;
            }
            else if (A[i] > other.getData()[j])
            {
                j++;
            }
            else // if A[i] == other.getData()[j], skip both
            {
                i++;
                j++;
            }
        }

        while (i < length)
        {
            result.append(A[i]);
            i++;
        }

        return result;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int arraySize, n;
    // cin >> arraySize;
    // ArrayADT<int> arr(arraySize);

    // cin >> n;
    // arr.setElements(n);

    // arr.display();
    // arr.append(6);
    // arr.display();
    // arr.insertElement(2, 9);
    // arr.display();
    // arr.deleteElement(2);
    // arr.display();
    // arr.insertElement(2, 9);
    // arr.display();
    // arr.deleteElement(2);
    // arr.display();
    // arr.linearSearch(2);
    // arr.binary_search(2);
    // arr.recursiveBinarySearch(0, arr.Length(), 2);
    // cout << arr.get(3);
    // arr.set(3, 13);
    // arr.display();
    // cout << arr.max();
    // cout << arr.min();
    // cout << arr.sum();
    // cout << arr.avg();
    // arr.reverse();
    // arr.leftShift(3);
    // arr.rightShift(3);
    // arr.leftRotate(3);
    // arr.display();
    // arr.rightRotate(3);
    // if (arr.isSorted() == 1)
    // {
    //     cout << "Sorted";
    // }
    // else
    // {
    //     cout << "Unsorted";
    // }
    // arr.append(12);1
    // arr.append(15);
    // arr.insertInSortedArray(9);
    // arr.display();

    int set1size, set2size, noOfElementsOfSet1, noOfElementsOfSet2;
    cin >> set1size >> set2size;
    ArrayADT<int> set1(set1size);
    ArrayADT<int> set2(set2size);

    cin >> noOfElementsOfSet1 >> noOfElementsOfSet2;
    set1.setElements(noOfElementsOfSet1);
    set2.setElements(noOfElementsOfSet2);

    ArrayADT<int> sortedSet1(set1size);
    sortedSet1.setElements(noOfElementsOfSet1);
    ArrayADT<int> sortedSet2(set2size);
    sortedSet2.setElements(noOfElementsOfSet2);

    // set1.display();
    // set2.display();

    // ArrayADT<int> set3 = set1.Union(set2);
    // cout << "Union of set1 and set2: ";
    // set3.display();

    // ArrayADT<int> set4 = set1.Intersection(set2);
    // cout << "Intersection of set1 and set2: ";
    // set4.display();

    // ArrayADT<int> set5 = set1.Difference(set2);
    // cout << "Difference of set1 and set2: ";
    // set5.display();

    sortedSet1.display();
    sortedSet2.display();

    ArrayADT<int> set6 = sortedSet1.UnionForSortedSets(sortedSet2);
    cout << "Union of sorted set1 and sorted set2: ";
    set6.display();

    ArrayADT<int> set7 = sortedSet1.IntersectionForSortedSets(sortedSet2);
    cout << "Intersection of sorted set1 and sorted set2: ";
    set7.display();

    ArrayADT<int> set8 = sortedSet1.DifferenceForSortedSets(sortedSet2);
    cout << "Difference of sorted set1 and sorted set2: ";
    set8.display();


    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// struct arrayADT
// {
//     int *A;
//     int size;
//     int length;
// };

// void display(const arrayADT &arr)
// {
//     for (int i = 0; i < arr.length; i++)
//     {
//         cout << arr.A[i] << " ";
//     }
//     cout << endl;
// }

// void append(arrayADT &arr, int i)
// {
//     if (arr.length < arr.size)
//     {
//         arr.A[arr.length] = i;
//         arr.length++;
//     }
//     else
//     {
//         cout << "Array is full, cannot append " << i << endl;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     arrayADT arr;
//     cin >> arr.size;

//     arr.A = new int[arr.size];
//     arr.length = 0;

//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr.A[i];
//     }

//     arr.length = n;

//     display(arr);
//     append(arr, 6);
//     display(arr);

//     delete[] arr.A; // Free allocated memory
//     return 0;
// }
