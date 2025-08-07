#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int result=0;
    int origin=x;
    while(x!=0){
        result+=x%10;
        x/=10;
    }
    if(origin%result==0)
        answer=true;
    else
        answer=false;
    return answer;
}