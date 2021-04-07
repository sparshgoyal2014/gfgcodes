#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int nonRepeating(string str){
    int firstIndex[256] = {0};
    int result = INT_MAX;

    for(int i=0; i<256; i++){
        firstIndex[i] = -1;
    }

    for(int i=str.length()-1; i >= 0; i--){
        if(firstIndex[str[i]] == -1){
            firstIndex[str[i]] = i;
        }else{
            firstIndex[str[i]] = -2;
        }
    }

    for(int i=0; i<256; i++){

        if(firstIndex[i] > 0)
            result = min(result, firstIndex[i]);
    }

    if(result == INT_MAX){
        return -1;
    }else{
        return result;
    }
}

int main() {

    return 0;
}
