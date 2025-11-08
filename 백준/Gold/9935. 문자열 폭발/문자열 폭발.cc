#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
    string bomb;
    string ans;
    stack<char> st;
    
    cin >> str;
    cin >> bomb;

    ans.reserve(100000);

    for (int i = 0; i < str.length(); i++) {
        st.push(str[i]);

        if (str[i] == bomb[bomb.length() - 1] && st.size() >= bomb.length()) {
            string tmp;
            for (int j = 0; j < bomb.length(); j++) {
                tmp.push_back(st.top());
                st.pop();
            }
            reverse(tmp.begin(), tmp.end());

            if (tmp.compare(bomb) != 0) {
                for (int i = 0; i < tmp.length(); i++)
                    st.push(tmp[i]);
            }
        }
    }

    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    if (ans.empty())
        cout << "FRULA";
    else
        cout << ans;

    return 0;
}