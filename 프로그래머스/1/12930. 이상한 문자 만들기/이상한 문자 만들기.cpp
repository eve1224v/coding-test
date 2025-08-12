#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    int index=0;
    
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            index=0;
        }
        else{
            if(index%2==0){
                if('a'<=s[i]&&s[i]<='z')
                    s[i]=toupper(s[i]);
            }
            else{
                if('A'<=s[i]&&s[i]<='Z')
                    s[i]=tolower(s[i]);
            }
            index++;
        }
    }
    answer=s;
    return answer;
}