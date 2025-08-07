#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long root = sqrt(n);
    if(root*root==n)
        return pow(root+1,2);
    else
        return -1;
}