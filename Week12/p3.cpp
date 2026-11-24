#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    private:
    double base, height;

    public:

    // Parameterized constructor
    Triangle(double b, double h) {
        base = b;
        height = h;
        
    }

    // Member Function to calculate area
    double hypo() {
        return sqrt((base * base) + (height * height));
    }
    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    // Using default constructor
    Triangle obj1(3.0, 4.0);
    cout << "Hypotenuse: " << obj1.hypo() << endl;
    cout << "Area: " << obj1.area() << endl;
    return 0;
}