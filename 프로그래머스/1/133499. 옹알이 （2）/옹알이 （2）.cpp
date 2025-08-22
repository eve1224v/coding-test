#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(int i=0; i<babbling.size(); i++){
        bool check=false;
        string first="";
        string fb="";
        
        for(int j=0; j<babbling[i].size(); j++){
            fb=babbling[i][j];
            if(babbling[i].substr(j,3)=="aya" && fb!=first){
                j+=2;
                first=fb;
            }
            else if (babbling[i].substr(j,2) == "ye" && first != fb)
            {
                j+=1;
                first = fb;
            }
            else if (babbling[i].substr(j,3) == "woo" && first != fb)
            {
                j+=2;
                first = fb;
            }
            else if (babbling[i].substr(j,2) == "ma" && first != fb)
            {
                j+=1;
                first = fb;
            }
            else
                check=true;
        }
        if(!check)
            answer++;
    }
    return answer;
}