#include <iostream>
#include <deque>
#include <vector>
using namespace std;

#define MAX 100

/*
Map[0][0]=2로 설정하고 시작

1. 움직인 좌표가 맵의 범위 넘어가거나, 뱀의 몸뚱아리가 있는 곳이면?
-> 프로그램 종료

2. 움직인 좌표가 맵에서 아무것도 없는 공간이면? (사과 없음)
-> 뱀의 머리가 한 칸 더 나아가고, 꼬리 사라짐

3. 움직인 좌표가 맵에서 사과가 있는 공간이면?
-> 꼬리 가만히 있고, 머리만 한 칸 더 나아감

4. 현재 시간이 뱀이 움직이는 방향을 바꾸는 시간이면?
-> 현재 시간과 입력받은 시간을 비교하고, 같으면 진행방향만 바꿔줌 
*/

int N, k, l;
int MAP[MAX][MAX];

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

vector<pair<int, char>> V;

void Print() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << MAP[i][j] << " ";
        }
        cout << endl;
    }
}

void Input() {
    cin >> N >> k;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        x = x - 1;
        y = y - 1;
        MAP[x][y] = 1; //사과는 1로 표시
    }
    cin >> l;
    for (int i = 0; i < l; i++) {
        int a;
        char b;
        cin >> a >> b;
        V.push_back(make_pair(a, b));
    }
}

int Turn_Direction(int d, char c) {
    if (c == 'L')  { //왼쪽90도
        if (d == 0) return 3; //오른쪽->위
        else if (d == 1) return 2; //왼쪽->아래
        else if (d == 2) return 0; //아래->오른쪽
        else if (d == 3) return 1; //위->왼쪽
    }
    else if (c == 'D') { //오른쪽 90도
        if (d == 0) return 2; //오른쪽->아래
        else if (d == 1) return 3; //왼쪽->위
        else if (d == 2) return 1; //아래->왼쪽
        else if (d == 3) return 0; //위->오른쪽
    }
}

void Solution() {
    deque<pair<int, int>> Q;
    int x = 0;
    int y = 0;
    int d = 0;
    int Time = 0;
    int Idx = 0;
    Q.push_back(make_pair(x, y));
    MAP[x][y] = 2;

    while (1) {
        Time++;

        int nx = x + dx[d];
        int ny = y + dy[d];

        // 게임 종료 조건
        if ((nx < 0 || ny < 0 || nx >= N || ny >= N || MAP[nx][ny] == 2)) {
            break;
        }
        // 다음 칸이 빈칸인 경우
        else if (MAP[nx][ny] == 0) {
            MAP[nx][ny] = 2; // 새 머리 자리 표시
            MAP[Q.back().first][Q.back().second] = 0; // 꼬리 위치 비우기
            Q.pop_back(); // 덱에서 꼬리 제거
            Q.push_front(make_pair(nx, ny)); // 머리 앞쪽으로 추가 
        }
        // 다음 칸에 사과가 있는 경우 
        else if (MAP[nx][ny] == 1) {
            MAP[nx][ny] = 2;
            Q.push_front(make_pair(nx, ny));
        }
        // 해당 시간에 방향 전환이 있는지 체크 
        if (Idx < V.size()) {
            if (Time == V[Idx].first) {
                if (V[Idx].second == 'L')
                    d = Turn_Direction(d, 'L');
                else if (V[Idx].second == 'D')
                    d = Turn_Direction(d, 'D');
                Idx++;
            }
        }
        // 현재 머리 좌표 업데이트 
        x = nx;
        y = ny;
    }
    cout << Time << '\n';
}

void Solve() {
    Input();
    Solution();
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}