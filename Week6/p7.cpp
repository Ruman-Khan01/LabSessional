#include <iostream>
using namespace std;

int main(){
    int n, i;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    int *ptr = arr;

    
    for(i = 0; i < n; i++){
       cout << "Enter element " << i + 1 << ": ";
       cin >> *ptr;
       ptr++;
    }

    ptr = arr;
    cout << "Your entered elements are: ";
    for(i = 1; i <= n; i++){
        cout << *ptr << " ";
        ptr++;
    }


    return 0;
}