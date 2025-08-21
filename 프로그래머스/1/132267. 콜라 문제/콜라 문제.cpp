#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int left = 0;
    while(n>=a){
        answer+=(n/a)*b;
        left=n%a;
        n=left+(n/a)*b;
    }
    return answer;
}