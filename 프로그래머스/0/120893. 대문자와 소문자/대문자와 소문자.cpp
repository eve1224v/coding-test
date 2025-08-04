#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0; i<my_string.size(); i++){
        if(65<=my_string[i]&&my_string[i]<=90){
            my_string[i]+=32;
        }
        else if(97<=my_string[i]&&my_string[i]<=122){
            my_string[i]-=32;
        }
    }
    answer=my_string;
    return answer;
}