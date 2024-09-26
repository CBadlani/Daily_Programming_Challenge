#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFactorization(int N) {
    vector<int> factors;

    while (N % 2 == 0) {
        factors.push_back(2);
        N /= 2;
    }

    for (int i = 3; i * i <= N; i += 2) {
        while (N % i == 0) {
            factors.push_back(i);
            N /= i;
        }
    }

    if (N > 2) {
        factors.push_back(N);
    }

    return factors;
}

int main() {
    int N = 18;  
    vector<int> result = primeFactorization(N);

    cout << "Prime factors of " << N << " are: [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
