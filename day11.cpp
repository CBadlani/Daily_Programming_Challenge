#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> generatePermutations(string s) {
    vector<string> result;

    sort(s.begin(), s.end());

    do {
        result.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    return result;
}

int main() {
    string s = "abc"; 
    vector<string> permutations = generatePermutations(s);

    cout << "Permutations of the string are:" << endl;
    for (const string& perm : permutations) {
        cout << perm << endl;
    }

    return 0;
}
