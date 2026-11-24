#include <iostream>
using namespace std;

int main(){
    int n, sum = 0, i;

    int arr[n];
    int *ptr = arr;

    cout << "Enter the length of elements in the array: ";
    cin >> n;

    for(i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> *ptr;
        ptr++;

    }

    ptr = arr;

    cout << "Enter the number of elements to sum: ";
    int m;
    cin >> m;

    if (m > 1 && m <= n){
        for(i = 0; i < m; i++)
        {
            sum += *ptr;
            ptr++;
        }
        
        cout << "The sum of the first " << m << " elements of your array is: " << sum;
        

    }
    else{
        cout << "Enter a correct number";
    }   
    
    


    return 0;
}