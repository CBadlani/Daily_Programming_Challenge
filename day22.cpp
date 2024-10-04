#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int firstElementKTimes(const vector<int>& arr, int k) {
    unordered_map<int, int> frequency;
    
    for (int num : arr) {
        frequency[num]++;
    }
    
    for (int num : arr) {
        if (frequency[num] == k) {
            return num;  
        }
    }
    
    return -1;
}

int main() {
    vector<int> arr = {3, 1, 4, 4, 5, 2, 6, 1, 4};
    int k = 2;
    
    int result = firstElementKTimes(arr, k);
    
    cout << "First element to appear " << k << " times: " << result << endl;
    
    return 0;
}
