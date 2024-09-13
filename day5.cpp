#include <iostream>
#include <vector>

using namespace std;

vector<int> findLeaders(const vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();

    if (n == 0) return leaders;

    int max_from_right = arr[n - 1];
    leaders.push_back(max_from_right);

    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] > max_from_right) {
            leaders.push_back(arr[i]);
            max_from_right = arr[i]; 
        }
    }

   
    int start = 0;
    int end = leaders.size() - 1;
    while (start < end) {
        int temp = leaders[start];
        leaders[start] = leaders[end];
        leaders[end] = temp;
        start++;
        end--;
    }

    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = findLeaders(arr);

    cout << "Leaders: ";
    for (int leader : leaders) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}
