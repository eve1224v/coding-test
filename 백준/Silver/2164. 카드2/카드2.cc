#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int n;

    cin >> n;
    if (n == 1) cout << "1";
    else if (n == 2) cout << "2";
    else {
        for (int i = 1; i <= n; i++) {
            q.push(i);
        }
        for (int i = 0; i < n - 2; i++) {
            q.pop();
            q.push(q.front());
            q.pop();
        }
        q.pop();
        cout << q.front();
    }

    return 0;
}
