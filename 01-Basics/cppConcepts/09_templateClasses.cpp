#include <bits/stdc++.h>
using namespace std;

class Arithmetic
{
private:
    int a;
    int b;

public:
    // Constructors
    Arithmetic();
    Arithmetic(int a, int b);

    // Methods
    int add() const;
    float add(float a, float b) const; // operator overloading for floats
    int subtract() const;
    int multiply() const;
    int divide() const;

    // Destructor
    ~Arithmetic();
};

// Default constructor initializing values to 0
Arithmetic::Arithmetic() : a(0), b(0) {}

// Parameterized constructor using initializer list
Arithmetic::Arithmetic(int a, int b) : a(a), b(b) {}

// Add method using class members
int Arithmetic::add() const
{
    return a + b;
}

// Overloaded add method for floats
float Arithmetic::add(float a, float b) const
{
    return a + b;
}

// Subtract method
int Arithmetic::subtract() const
{
    return a - b;
}

// Multiply method
int Arithmetic::multiply() const
{
    return a * b;
}

// Divide method with a check to prevent division by zero
int Arithmetic::divide() const
{
    if (b == 0)
    {
        cerr << "Error: Division by zero" << endl;
        return 0; // returning 0 in case of error
    }
    return a / b;
}

// Destructor
Arithmetic::~Arithmetic()
{
    cout << "Arithmetic object has been deconstructed" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Using parameterized constructor
    Arithmetic a1(10, 5);

    // Test various operations
    cout << "Addition: " << a1.add() << endl;
    cout << "Subtraction: " << a1.subtract() << endl;
    cout << "Multiplication: " << a1.multiply() << endl;
    cout << "Division: " << a1.divide() << endl;

    // Testing operator overloading for floating-point numbers
    cout << "Floating-point Addition: " << a1.add(5.5f, 3.2f) << endl;

    return 0;
}
