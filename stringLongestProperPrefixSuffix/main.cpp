#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fillSubStringLPS(string str, int n){
    for(int length = n-1; length >= 0; length++){

        bool flag = true;

        for(int i=0; i<length; i++){
            if(str[i] != str[n - length + i]){
                flag = false;
            }
        }

        if(flag){
            return length;
        }
    }

    return 0;
}

void fillLPS(string str){
    int lps[str.length()];
    for(int i=0; i<str.length(); i++){
        lps[i] = fillSubStringLPS(str, i+1);
    }
}

// efficient approach

void fillLPSEfficient(string str, int lps[]){
    lps[0] = 0;
    int length = 0;
    int n = str.length();

    int i=1;

    while(i < n){
        if(str[i] == str[length]){
            length++;
            lps[i] = length;
            i++;
        }else{
            if(length == 0){
                lps[i] = 0;
                i++;
            }else{
                length = lps[length-1];
            }
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
