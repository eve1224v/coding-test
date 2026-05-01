#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pn=0;
    int yn=0;

    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for(int i=0; i<s.size(); i++){
        if(s[i]=='p')
            pn++;
        if(s[i]=='y')
            yn++;
    }
    
    if(pn==yn){
        if(pn==0&&yn==0)
            answer=false;
        answer=true;
    }
    else
        answer=false;

    return answer;
}