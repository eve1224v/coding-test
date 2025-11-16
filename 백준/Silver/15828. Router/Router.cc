#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int num;
    queue<int> q;

    cin >> n;

    while (true) {
        cin >> num;
        if (num == -1)
            break;
        if (num > 0) {
            if (q.size() < n)
                q.push(num);
        }
        if (num == 0) {
            q.pop();
        }
    }
    if (q.empty())
        cout << "empty" << '\n';
    else {
        while (!q.empty()) {
            cout << q.front() << ' ';
            q.pop();
        }
    }

    return 0;
}