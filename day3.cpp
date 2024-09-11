#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    
    int a = arr[0];
    int b = arr[0];

    do {
        a = arr[a];
        b = arr[arr[b]];
    } while (a != b);

    b = arr[0];
    while (a != b) {
        a = arr[a];
        b = arr[b];
    }

    return b;
}

int main() {
    int arr[] = {4, 1, 3, 4, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicate = findDuplicate(arr, n);
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
