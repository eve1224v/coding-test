#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max=array[0];
    int result=0;
    for(int i=0; i<array.size(); i++){
        if(array[i]>max){
            max=array[i];
            result=i;
        }
    }
    answer.push_back(max);
    answer.push_back(result);
    return answer;
}