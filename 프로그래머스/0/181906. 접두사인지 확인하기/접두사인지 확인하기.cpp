#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    string prefix;
    for(int i=0; i<my_string.size(); i++){
        prefix+=my_string[i];
        if(is_prefix==prefix)
            answer=1;
    }
    return answer;
}