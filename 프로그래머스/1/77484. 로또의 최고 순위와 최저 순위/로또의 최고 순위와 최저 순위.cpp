#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zerocnt=0; 
    int count=0;
    
    for(int i=0; i<lottos.size(); i++){
        if(lottos[i]==0){
            zerocnt++;
            continue;
        }
        for(int j=0; j<win_nums.size(); j++){
            if(lottos[i]==win_nums[j]){
                count++;
                break;
            }
        }
    }
    
    if(7-(zerocnt+count)>6)
        answer.push_back(6);
    else
        answer.push_back(7-(zerocnt+count));
    if(zerocnt==lottos.size())
        answer.push_back(answer[0]+zerocnt-1);
    else
        answer.push_back(answer[0]+zerocnt);
    return answer;
}