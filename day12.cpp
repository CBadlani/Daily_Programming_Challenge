#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

bool isValid(string s) {
    stack<char> st;

    unordered_map<char, char> bracketMap = {
        {')', '('}, 
        {'}', '{'}, 
        {']', '['}
    };

    for (char c : s) {
        if (bracketMap.count(c)) {
            if (st.empty() || st.top() != bracketMap[c]) {
                return false;
            }
            st.pop();
        } else {
            st.push(c);
        }
    }

    return st.empty();
}

int main() {
    string s = "[{()}]"; 

    bool result = isValid(s);

    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
