#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int k=j+1; k<nums.size(); k++){
                int count=0;
                int sum=nums[i]+nums[j]+nums[k];
                for(int i=1; i<=sum; i++){
                    if(sum%i==0){
                        count++;
                    }
                }
                if(count==2)
                    answer++;
            }
        }
    }
    return answer;
}