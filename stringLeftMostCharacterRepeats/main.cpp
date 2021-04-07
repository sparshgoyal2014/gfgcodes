#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int leftmostRepeat(string str){
    int count[256] = {0};
    for(int i=0; i<str.length(); i++){
        count[str[i]]++;
    }

    for(int i=0; i<str.length(); i++){
        if(count[str[i]] > 1){
            return i;
        }
    }

    return -1;
}

// one traversal

int leftRepeating(string str){
    int result = INT_MAX;

    int firstIndex[256];

    for(int i=0; i<256; i++){
        firstIndex[i] = -1;
    }

    for(int i=0; i<str.length(); i++){
        if(firstIndex[str[i]] ==  -1){
            firstIndex[str[i]] = i;
        }else {
            result = min(result, firstIndex[str[i]]);
        }
    }

    if(result == INT_MAX){
        return -1;
    }else{
        return result;
    }

}

// one traversal with no min() comparison
int leftRepeatingRightTraversal(string str){
    int result = INT_MAX;

    int firstIndex[256] = {0};

    for(int i=0; i<256; i++){
        firstIndex[i] = -1;
    }

    for(int i = str.length() - 1; i >= 0; i--){
        if(firstIndex[str[i]] == -1){
            firstIndex[str[i]] = i;
        }else{
            result = firstIndex[str[i]];
        }
    }

    if(result == INT_MAX){
        return -1;
    }else{
        return result;
    }
}




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
