#include <iostream>
using namespace std;

int main(){
    char str1[100], str2[100];

    cout << "\nEnter First String : ";
    cin.getline(str1, 1000);

    char *ptr1;
    ptr1 = str1;

    cout << "\nEnter Second String : ";
    cin.getline(str2, 1000);

    char *ptr2;
    ptr2 = str2;

    while((*ptr1) != '\0') {
        ptr1++;
    }

    *ptr1 = ' ';
    ptr1++;
    *ptr1 = '\0';

    while((*ptr2) != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    *ptr1 = '\0';

    cout << "\nConcatenated String Is : " << str1;
    return 0;
}