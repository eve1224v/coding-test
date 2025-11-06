#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> st;
    stack<char> subst;
    stack<char> result;
    string s;
    int m;
    char c;
    string command;

    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        st.push(s[i]);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> command;

        if (command == "L") {
            if (!st.empty()) {
                subst.push(st.top());
                st.pop();
            }
        }
        else if (command == "P") {
            cin >> c;
            st.push(c);
        }
        else if (command == "B") {
            if (!st.empty()) {
                st.pop();
            }
        }
        else if (command == "D") {
            if (!subst.empty()) {
                st.push(subst.top());
                subst.pop();
            }
        }
    }
    while (!subst.empty()) {
        st.push(subst.top());
        subst.pop();
    }

    while (!st.empty()) {
        result.push(st.top());
        st.pop();
    }
    while (!result.empty()) {
        cout << result.top();
        result.pop();
    }

    return 0;
}