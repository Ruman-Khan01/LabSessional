#include <iostream>
using namespace std;

class Sample {
    private:
    int num1;
    int num2;

    public:
    // default constructor
    Sample() {
        num1 = 10;
        num2 = 20;
    }

    // Member Function to display the values
    void display() {
        cout << "First number: " << num1 << endl;
        cout << "Second number: " << num2 << endl;
    }
};
int main() {
    Sample obj;
    obj.display();

    return 0;
}