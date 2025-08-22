#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(char c : myString){
        if(c=='a' || c=='A')
            c='A';
        else if(65<=c&&c<=90)
            c+=32;
        answer+=c;
    }
    return answer;
}