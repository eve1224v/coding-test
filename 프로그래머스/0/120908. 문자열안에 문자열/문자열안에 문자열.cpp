#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    int index=str1.find(str2);
    if(index==string::npos)
        answer=2;
    else
        answer=1;
    return answer;
}