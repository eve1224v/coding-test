#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    string command;
    int n, num;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> command;

        if (command == "push") {
            cin >> num;
            q.push(num);
        }
        else if (command == "pop") {
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else
                cout << "-1" << '\n';
        }
        else if (command == "size")
            cout << q.size() << "\n";
        else if (command == "empty") {
            if (q.empty())
                cout << "1" << "\n";
            else
                cout << "0" << "\n";
        }
        else if (command == "front") {
            if (!q.empty())
                cout << q.front() << "\n";
            else
                cout << "-1" << "\n";
        }
        else if (command == "back") {
            if (!q.empty())
                cout << q.back() << "\n";
            else
                cout << "-1" << "\n";
        }
    }
    return 0;
}
