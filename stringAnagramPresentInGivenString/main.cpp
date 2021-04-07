#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool areSame(int countText[], int countPart[]){
    for(int i=0; i<256; i++){
        if(countText[i] != countPart[i]){
            return false;
        }
    }

    return true;
}

bool checkAnagramPresent(string text, string part){
    int countText[256] = {0};
    int countPart[256] = {0};

    for(int i=0; i<part.length(); i++){
        countText[text[i]]++;
        countPart[part[i]]++;
    }

    for(int i=part.length(); i<text.length(); i++){
        if(areSame(countText, countPart)){
            return true;
        }

        countText[text[part.length()]]++;
        countText[text[i - part.length()]]--;
    }

    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
