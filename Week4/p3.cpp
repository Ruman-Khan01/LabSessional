#include <iostream>
using namespace std;

int main(){
    double a, b, c, d, e, f, g;

    cout << "Enter the numbers: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    if(c == 0) {
        cout << "Error: Division by zero is not allowed";
        return 1;
    }

    double result = ((a + b / c * d- e) * (f- g));

    cout << result;

    return 0;

}