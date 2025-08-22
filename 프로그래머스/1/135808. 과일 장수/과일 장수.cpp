#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int box = score.size()/m;
    
    sort(score.begin(), score.end(), greater<>());
    for(int i=0; i<box; i++){
        vector<int> v(score.begin()+i*m, score.begin()+(i+1)*m);
        answer+=v[v.size()-1]*m;
    }
    return answer;
}