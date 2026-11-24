#include <iostream>
using namespace std;

int main(){
    int a;
    int *ptr=&a;

    cout << "Enter number: ";
    cin >> a;

    cout << "Original value: " << a << endl;

    (*ptr)++;
    cout << "After incrementing: " << a << endl;

    (*ptr)--;
    cout << "After decrementing: " << a << endl;

    return 0;
}