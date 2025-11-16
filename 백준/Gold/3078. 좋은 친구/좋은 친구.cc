#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    string name;
    queue<int> q[21];
    long long ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> name;

        int len = name.length();

        while (!q[len].empty() && i - q[len].front() > k) {
            q[len].pop();
        }
        ans += q[len].size();
        q[len].push(i);
    }
    cout << ans;
     
    return 0;
}