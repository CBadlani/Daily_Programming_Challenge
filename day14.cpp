#include <iostream>
#include <unordered_map>
using namespace std;

int countAtMostKDistinct(const string &s, int k) {
    int left = 0, right = 0;
    int count = 0;  
    unordered_map<char, int> charFrequency; 
    while (right < s.length()) {
        charFrequency[s[right]]++;

        while (charFrequency.size() > k) {
            charFrequency[s[left]]--;
            if (charFrequency[s[left]] == 0) {
                charFrequency.erase(s[left]);
            }
            left++;  
        }

        count += (right - left + 1);
        right++;  
    }

    return count;
}

int countSubstringsWithKDistinct(const string &s, int k) {
    return countAtMostKDistinct(s, k) - countAtMostKDistinct(s, k - 1);
}

int main() {
    string s = "pqpqs";  
    int k = 2;           
    int result = countSubstringsWithKDistinct(s, k);
    cout << result << endl;  

    return 0;
}
