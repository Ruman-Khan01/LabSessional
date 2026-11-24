#include <iostream>
using namespace std;

int main(){
    int a, b, sum;
    int *ptr1, *ptr2;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    ptr1=&a;
    ptr2=&b;
    sum = *ptr1 + *ptr2;

    cout << "Sum: " << sum << endl;
    
    return 0;
}