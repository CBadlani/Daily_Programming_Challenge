#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int>& st, int element) {
    if (st.empty() || st.top() <= element) {
        st.push(element);
        return;
    }
    
    int topElement = st.top();
    st.pop();
    
    insertSorted(st, element);
    
    st.push(topElement);
}

void sortStack(stack<int>& st) {
    if (st.empty()) {
        return;
    }
    
    int topElement = st.top();
    st.pop();
    
    sortStack(st);
    
    insertSorted(st, topElement);
}

int main() {
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);
    
    sortStack(st);
    
    cout << "Sorted Stack: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}
