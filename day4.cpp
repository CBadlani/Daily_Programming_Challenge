#include <iostream>
#include <algorithm> 
using namespace std;

void mergeArrays(int arr1[], int m, int arr2[], int n) {
    int i = m - 1;
    int j = 0;    

    while (i >= 0 && j < n) {
        if (arr1[i] > arr2[j]) {
          
            swap(arr1[i], arr2[j]);
        }
        i--;
        j++;
    }

    sort(arr1, arr1 + m); 
    sort(arr2, arr2 + n); 
}

int main() {
    int arr1[] = {1, 3, 5, 7}; 
    int arr2[] = {2, 4, 6, 8}; 
    int m = sizeof(arr1) / sizeof(arr1[0]); 
    int n = sizeof(arr2) / sizeof(arr2[0]); 

    mergeArrays(arr1, m, arr2, n);

    cout << "arr1: ";
    for (int i = 0; i < m; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "arr2: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
