#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter the numbers: ";
    cin >> a >> b;

    int sum = 0;

    sum = a ^ b ;

    cout << sum;

    return 0;
}