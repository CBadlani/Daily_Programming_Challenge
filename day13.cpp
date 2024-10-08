#include <iostream>
using namespace std;

string expandAroundCenter(const string &s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.empty()) return "";  
    string longest = "";       

    for (int i = 0; i < s.length(); i++) {
        string oddPalindrome = expandAroundCenter(s, i, i);
        string evenPalindrome = expandAroundCenter(s, i, i + 1);

        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }

    return longest;  
}

int main() {
    string s = "babad";  
    string result = longestPalindrome(s);
    cout << result << endl;  

    return 0;
}
