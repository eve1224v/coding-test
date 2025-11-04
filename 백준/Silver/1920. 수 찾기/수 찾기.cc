#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int len, int m, int arr[]);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int num[1000000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);

    cin >> m;
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        cout << binarySearch(n, tmp, num) << '\n';
    }
    return 0;
}

int binarySearch(int len, int m, int arr[]) {
    int start = 0;
    int end = len - 1;
    int midIdx;

    while (start <= end) {
        midIdx = (start + end) / 2;
        if (m == arr[midIdx])
            return 1;
        else if (m < arr[midIdx])
            end = midIdx - 1;
        else
            start = midIdx + 1;
    }

    return 0;
}