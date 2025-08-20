#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    int answer = 0;
    string sol[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    string st=s;
    for(int i=0; i<10; i++){
        string a = to_string(i);
        st=regex_replace(st, regex(sol[i]), a);
    }
    answer=stoi(st);
    return answer;
}