#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int evaluatePostfix(string expression) {
    stack<int> st;
    stringstream ss(expression);
    string token;

    while (ss >> token) {
        if (isdigit(token[0])) {
            st.push(stoi(token));
        } else {
            int operand2 = st.top(); st.pop();
            int operand1 = st.top(); st.pop();
            
            if (token == "+") {
                st.push(operand1 + operand2);
            } else if (token == "-") {
                st.push(operand1 - operand2);
            } else if (token == "*") {
                st.push(operand1 * operand2);
            } else if (token == "/") {
                st.push(operand1 / operand2);
            }
        }
    }

    return st.top();
}

int main() {
    string expression = "2 1 + 3 *";  
    int result = evaluatePostfix(expression);
    
    cout << "Result: " << result << endl;

    return 0;
}
