#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int count=0;
    for(int i=1; i<a; i++){
        if(i==2)
            count+=29;
        else if(i==4 || i==6 || i==9 || i==11)
            count+=30;
        else
            count+=31;
    }
    count=count-1+b;
    if(count%7==1)
        answer="SAT";
    else if(count%7==2)
        answer="SUN";
    else if(count%7==3)
        answer="MON";
    else if(count%7==4)
        answer="TUE";
    else if(count%7==5)
        answer="WED";
    else if(count%7==6)
        answer="THU";
    else if(count%7==0)
        answer="FRI";
    return answer;
}