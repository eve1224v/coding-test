#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int answer=0;
    for(int i=0; i<seoul.size(); i++){
        if(seoul[i]=="Kim"){
            answer=i;
            break;
        }
    }
    return "김서방은 "+to_string(answer)+"에 있다";
}