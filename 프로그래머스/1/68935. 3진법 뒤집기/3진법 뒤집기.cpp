#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    string result="";
    while(n!=0){
        result+=(n%3)+'0';
        n/=3;
    }
    
    reverse(result.begin(), result.end());
    
    int base=1;
    for(int i=0; i<result.size(); i++){
        answer+=(result[i]-'0')*base;
        base*=3;
    }
    return answer;
}