#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        else {
            if (st.empty()) return false;

            char top = st.top();

            if ((top == '(' && ch == ')') ||
                (top == '{' && ch == '}') ||
                (top == '[' && ch == ']')) {
                st.pop();
            } 
            else {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (isValid(s)) cout << "true";
    else cout << "false";

    return 0;
}
