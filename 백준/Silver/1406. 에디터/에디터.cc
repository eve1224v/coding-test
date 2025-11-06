#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    stack<char> st;
    stack<char> subst;
    string s;
    string result;
    int m;
    char c;
    string command;

    cin >> s;
    for (int i = 0; i < s.size(); i++) {
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
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());
    cout << result;

    return 0;
}