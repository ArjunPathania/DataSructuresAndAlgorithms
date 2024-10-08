#include <bits/stdc++.h>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    // Constructors
    Arithmetic();
    Arithmetic(T a, T b);

    // Methods
    T add() const;
    T subtract() const;
    T multiply() const;
    T divide() const;

    // Destructor
    ~Arithmetic();
};

// Default constructor initializing values to 0
template <class T>
Arithmetic<T>::Arithmetic() : a(0), b(0) {}

// Parameterized constructor using initializer list
template <class T>
Arithmetic<T>::Arithmetic(T a, T b) : a(a), b(b) {}

// Add method using class members
template <class T>
T Arithmetic<T>::add() const
{
    return a + b;
}

// Subtract method
template <class T>
T Arithmetic<T>::subtract() const
{
    return a - b;
}

// Multiply method
template <class T>
T Arithmetic<T>::multiply() const
{
    return a * b;
}

// Divide method with a check to prevent division by zero
template <class T>
T Arithmetic<T>::divide() const
{
    if (b == 0)
    {
        cerr << "Error: Division by zero" << endl;
        return 0; // returning 0 in case of error
    }
    return a / b;
}

// Destructor
template <class T>
Arithmetic<T>::~Arithmetic()
{
    cout << "Arithmetic object has been deconstructed" << endl;
}

// Templated main function
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Using the template class for integers
    Arithmetic<int> intArith(10, 5);
    cout << "Integer Addition: " << intArith.add() << endl;
    cout << "Integer Subtraction: " << intArith.subtract() << endl;
    cout << "Integer Multiplication: " << intArith.multiply() << endl;
    cout << "Integer Division: " << intArith.divide() << endl;

    // Using the template class for floating-point numbers
    Arithmetic<float> floatArith(5.5f, 3.2f);
    cout << "Float Addition: " << floatArith.add() << endl;
    cout << "Float Subtraction: " << floatArith.subtract() << endl;
    cout << "Float Multiplication: " << floatArith.multiply() << endl;
    cout << "Float Division: " << floatArith.divide() << endl;

    return 0;
}
