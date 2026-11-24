#include <iostream>
using namespace std;

class Calculator {
    private:
    int num1, num2, num3, num4;

    public:
    // default constructor
    Calculator() {
        num1 = 10;
        num2 = 20;
        num3 = 30;
        num4 = 40;
        cout << "Default constructor called." << endl;
    }

    //2. Parameterized constructor with default values
    Calculator(int n1, int n2) {
        num1 = n1;
        num2 = n2;
        num3 = 1; // default value
        num4 = 1; // default value
        cout << "Parameterized constructor with default values called." << endl;
    }

    //3. Parameterized constructor
    Calculator(int n1, int n2, int n3, int n4) {
        num1 = n1;
        num2 = n2;
        num3 = n3;
        num4 = n4;
        cout << "Parameterized constructor called." << endl;
    }


    // Member Function to display the values
    void displayOperations() {
        cout << "Values: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;
        cout << "Addition: " << (num1 + num2 + num3 + num4) << endl;
        cout << "Subtraction (num1 - num2): " << (num1 - num2) << endl;
        cout << "Multiplication: " << (num1 * num2 * num3 * num4) << endl;
        
        if (num2 != 0){
            cout << "Division (num1 / num2): " << (num1 / num2) << endl;
        } else {
            cout << "Division by zero is not allowed." << endl;
        }

    }
};
int main() {
    // Using default constructor
    Calculator obj1;
    obj1.displayOperations();

    Calculator obj2(5, 10, 15, 20);
    obj2.displayOperations();

    Calculator obj3(14, 7);
    obj3.displayOperations();

    return 0;
}