#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, w, l;
int a;
vector<int> v; // 트럭의 무게들
queue<pair<int, int>> q; // 남은 다리 길이, 트럭의 무게 
int t = 0;
int curL = 0;

void Solve() {
    int i = 0; // 기다리고 있는 다음 트럭 번째 수 
    while (1) {
        if (i < n && curL + v[i] <= l) {
            q.push(make_pair(w, v[i]));
            curL += v[i];
            i++;
        }

        int s = q.size();

        for (int j = 0; j < s; j++) {
            if (!q.empty()) {
                int curTime = q.front().first;
                int weight = q.front().second;
                q.pop();

                if (curTime - 1 != 0)
                    q.push(make_pair(curTime - 1, weight));
                else
                    curL -= weight;
            }
        }
        t++;

        if (i == n && q.empty())
            break;
    }

    cout << t + 1;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> w >> l;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }

    Solve();

    return 0;
}