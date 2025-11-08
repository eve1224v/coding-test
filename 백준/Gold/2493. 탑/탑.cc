#include <iostream>
#include <stack>
using namespace std;

int tp[500001];
int ans[500001];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> tp[i];

    stack<pair<int, int>> st;

    for (int i = 1; i <= n; ++i) {
        while (!st.empty() && st.top().first <= tp[i])
            st.pop();
        ans[i] = st.empty() ? 0 : st.top().second;

        st.push({ tp[i], i });
    }
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << (i == n ? '\n' : ' ');
    }

    return 0;
}