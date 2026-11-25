#include <iostream>
using namespace std;

int main(){
    int n, i = 3;

    cout << "Enter number of terms: ";
    cin >> n;

    int first = 0, second = 1;

    cout << "Fibonacci Sequence: ";

    cout << first << " " <<  second << " ";

    while(i <= n) {
        int next = first + second;
        cout << next << " ";

        first = second;
        second = next;
        i++;
    }  
    
    return 0;
}
// for (int i = 1; i <= n; ++i) {
//     if (i == 1) {
//         cout << first << " ";
//         continue;
//     }

//     if(i == 2) {
//         cout << second << "";
//         continue;
//     }

//     int next = first + second;
//     cout << next << " ";

//     first = second;
//     second = next;
// }