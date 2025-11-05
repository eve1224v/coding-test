#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    int cnt = 1;
    stack<int> s;
    vector<char> result;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;

        while (cnt <= x) {
            s.push(cnt);
            cnt++;
            result.push_back('+');
        }

        if (s.top() == x) {
            s.pop();
            result.push_back('-');
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
}