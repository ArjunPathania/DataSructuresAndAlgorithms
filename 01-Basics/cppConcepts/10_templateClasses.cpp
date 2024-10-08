#include <bits/stdc++.h>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    // Constructor without return type
    Arithmetic(T a, T b);

    // Method to add
    T add();

    // Destructor
    ~Arithmetic();
};

// Constructor definition using initializer list
template <class T>
Arithmetic<T>::Arithmetic(T a, T b) : a(a), b(b) {}

// Add method using class members
template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}

// Destructor definition
template <class T>
Arithmetic<T>::~Arithmetic()
{
    cout << "Arithmetic Deconstructed" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Creating an object of the template class for integers
    Arithmetic<int> arith(10, 5);

    // Test the add function
    cout << "Addition: " << arith.add() << endl;

    return 0;
}
