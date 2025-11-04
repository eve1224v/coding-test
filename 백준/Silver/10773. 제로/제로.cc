#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;
    int num;
    int result = 0;
    stack<int> s;

    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> num;

        if (num != 0) {
            s.push(num);
            result += s.top();
        }
        else {
            result -= s.top();
            s.pop();
        }
    }

    cout << result;

    return 0;
}