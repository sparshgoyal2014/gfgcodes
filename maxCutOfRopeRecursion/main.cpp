#include <iostream>
#include <cmath>
using namespace std;

int maxCuts(int length, int a, const int b, const int c){


    if(length == 0)return 0;
    if(length < 0)return -1;


    int result = max(max(maxCuts(length-a,a,b,c), maxCuts(length-b,a,b,c)), maxCuts(length-c,a,b,c));
    if(result == -1)return -1;
    return 1+result;
}

int main() {

    static int number = 4;
    cout << maxCuts(23,11,9,12) << endl;
    cout << maxCuts(20,1,1,1);
    return 0;
}
