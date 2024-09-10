#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    
    int totalSum = (n * (n + 1)) / 2;
    
    
    int arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The missing number is: " << findMissingNumber(arr, n) << endl;
    
    return 0;
}
