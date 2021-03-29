#include <iostream>

using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle() {length = 0; width = 0;}
    Rectangle(int l, int w) {length = l; width = w;}
    void get_dim() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
    int area(int l);
    int area(int l, int w);

};

// Function to calculate area of a square
int Rectangle::area(int l) {
    length = l;
    return length*length;
}

// Function to calculate area of a rectangle
int Rectangle::area(int l, int w) {
    length = l;
    width = w;
    return length*width;
}

int main()
{
    Rectangle rect(30, 50), square;

    cout << "Rectangle Dimensions" << endl;
    rect.get_dim();

    cout << "Square Dimensions" << endl;
    square.get_dim();

    cout << "Area of rectangle: " << rect.area(20, 30) << endl;
    cout << "Area of square: " << square.area(20) << endl;
    return 0;
}
