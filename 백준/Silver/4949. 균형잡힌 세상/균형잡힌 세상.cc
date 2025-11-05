#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        string ps;
        stack<char> s;
        bool flag = 0;

        getline(cin, ps);

        if (ps == ".")
            break;

        for (int i = 0;i < ps.length(); i++) {
            char ch = ps[i];
            if (ch == '(' || ch == '[')
                s.push(ch);
            else if (ch == ')') {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else {
                    flag = 1;
                    break;
                }
            }
            else if (ch == ']') {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else {
                    flag = 1;
                    break;
                }
            }
        }

        if (s.empty()&&flag==0)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }

    return 0;
}