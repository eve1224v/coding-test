#include <iostream>
#include <stack>
using namespace std;

bool isvps(const string& ps) {
    stack<char> s;
    for (char ch : ps) {
        if (ch == '(')
            s.push(ch);
        else if (ch == ')') {
            if (s.empty())
                return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string ps;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> ps;

        if (isvps(ps))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}