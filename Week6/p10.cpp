#include <iostream>
using namespace std;

int main(){
    char str[100];
    cout << "\n Enter A String : ";
    cin.getline(str, 100);

    int l = 0;
    while (str[l]!='\0') {
        l++;
    }

    char *front = str;
    char *back = str + l - 1;

    while (front < back) {
        char temp = *front;
        *front = *back;
        front++;
        *back = temp;
        back--;
    }

    cout << "\n Reversed string is: " << str << endl;

    return 0;
}