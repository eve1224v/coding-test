#include <iostream>
#include <stack>
using namespace std;

int a[1000001];
int s[1000001];

int main() {
    stack<int> st;
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= s[i])
            st.pop();
        if (st.empty())
            a[i] = -1;
        else
            a[i] = st.top();
        st.push(s[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}