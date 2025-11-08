#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t;
    int n, m;
    int pr;

    cin >> t;
    for (int i = 0; i < t; i++) {
        priority_queue<int> pq;
        queue<pair<int, int>> q;
        cin >> n >> m;
        for (int j = 0; j < n; j++) {
            cin >> pr;
            q.push({ j,pr });
            pq.push(pr);
        }
        int cnt = 0;
        while (!q.empty()) {
            int location = q.front().first;
            int value = q.front().second;
            q.pop();

            if(pq.top()==value){
                pq.pop();
                cnt++;
                if (m == location) {
                    cout << cnt << "\n";
                    break;
                }
            }
            else
                q.push({ location,value });
        }
    }

    return 0;
}