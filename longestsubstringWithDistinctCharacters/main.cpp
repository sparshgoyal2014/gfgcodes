#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longesetWindowOfdistinct(string str){

    int length = str.length();

    int maxEnding[length];
    for(int i=0; i<length; i++){
        maxEnding[i] = 0;
    }

    int previousIndex[256];

    for(int i=0; i<256; i++){
        previousIndex[i] = -1;
    }

    maxEnding[0] = 1;
    previousIndex[str[0]] = 0;

    int startingWindowIndex = 0;

    for(int i=1; i<length; i++){
        startingWindowIndex = max(startingWindowIndex, previousIndex[str[i]]);
        maxEnding[i] = i - startingWindowIndex + 1;

        previousIndex[str[i]] = i;

    }

    int result = 0;

    for(int i=0; i<length; i++){
        result = max(result, maxEnding[i]);
    }

    return result;



}


int main() {



    return 0;
}
