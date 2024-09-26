#include <iostream>
#include <cmath>
using namespace std;

int countDivisors(int N) {
    int count = 0;

    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            count++;
            if (i != N / i) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int N = 12; 
    int result = countDivisors(N);

    cout << "Number of divisors of " << N << " is: " << result << endl;

    return 0;
}
