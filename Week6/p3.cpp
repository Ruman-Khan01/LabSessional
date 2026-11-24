#include <iostream>
using namespace std;

int main(){
    int a;
    int *ptr1 = &a;

    cout << "Enter a number: ";
    cin >> a;
    cout << "The number is: " << a << endl;
    cout << "Address of the number is: " << &a << endl;
    cout << "Value at that address (deferencing): " << *ptr1 << endl;
    cout << "Address of the number is (using pointer): " << ptr1 << endl;

   

    return 0;
}