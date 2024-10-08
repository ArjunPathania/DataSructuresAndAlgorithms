#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Default constructor
    Rectangle() : length(1), breadth(1) {}

    // Parameterized constructor
    // Rectangle(int length, int breadth)
    // {
    //     this->length = length;
    //     this->breadth = breadth;
    // }
    Rectangle(int length, int breadth) : 
    length(length), breadth(breadth) {}

    // Function to calculate the area of the rectangle
    int area()
    {
        return length * breadth;
    }

    // Function to calculate the perimeter of the rectangle
    int perimeter()
    {
        return 2 * (length + breadth);
    }

    // Setter for length
    void setLength(int length)
    {
        this->length = length;
    }

    // Setter for breadth
    void setBreadth(int breadth)
    {
        this->breadth = breadth;
    }

    // Getter for breadth
    int getLength()
    {
        return this->length;
    }

    // Getter for length
    int getBreadth()
    {
        return this->breadth;
    }
    ~Rectangle()
    {
        cout << "Rectangle has Deconstructed";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Solution code goes here
    Rectangle r(10, 5);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    cout << "Length: " << r.getLength() << endl;
    cout << "Breadth: " << r.getBreadth() << endl;

    return 0;
}
