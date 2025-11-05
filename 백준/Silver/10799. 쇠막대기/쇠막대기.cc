#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    int count = 0;
    stack<int> s;

    cin >> input;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '(' && input[i + 1] == ')') {
            i++;
            count += s.size();
        }
        else if (input[i] == '(')
            s.push(i);
        else if (input[i] == ')') {
            count++;
            s.pop();
        }
    }

    cout << count;

    return 0;
}