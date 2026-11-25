#include <iostream>
using namespace std;

int main(){
    int a;
    
    cout << "Enter the number: ";
    cin >> a;

    string status = (a % 2 == 0) ? "Even" : "Odd";
    
    cout << status;

    return 0;
}