#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char &c : my_string){
        if(isupper(c)){
            c=tolower(c);
        }
    }
    sort(my_string.begin(), my_string.end());
    answer=my_string;
    return answer;
}