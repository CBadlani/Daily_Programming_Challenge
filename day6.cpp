#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> findZeroSumSubarrays(int arr[], int n) {
    vector<pair<int, int>> result;

    for (int i = 0; i < n; i++) {
        int sum = 0; 

        for (int j = i; j < n; j++) {
            sum += arr[j]; 

            if (sum == 0) {
                result.push_back({i, j});
            }
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, -3, 3, -1, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<pair<int, int>> result = findZeroSumSubarrays(arr, n);

    for (auto subarray : result) {
        cout << "(" << subarray.first << ", " << subarray.second << ")" << endl;
    }

    return 0;
}
