#include <iostream>
using namespace std;

int main(){
    int a, b, swap;
    int *ptr1, *ptr2;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    ptr1=&a;
    ptr2=&b;

    swap = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = swap;
    cout << "After swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}