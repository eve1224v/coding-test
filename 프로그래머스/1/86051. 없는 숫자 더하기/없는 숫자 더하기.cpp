#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int result=0;

    for(int i=0; i<10; i++){
        if(find(numbers.begin(), numbers.end(), i)==numbers.end())
            result+=i;
    }
    return result;
}