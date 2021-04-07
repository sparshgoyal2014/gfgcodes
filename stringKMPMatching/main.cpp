#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void fillLPS(string str, int lps[]){
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
                length = lps[length - 1];
            }
        }
    }
}

void srtingMatching(string text, string pattern){
    int n = text.length();
    int m = pattern.length();

    int lps[m];

    fillLPS(pattern, lps);

    int i=0;
    int j=0;

    while(i < n){
        if(text[i] == pattern[j]){
            i++;
            j++;
        }

        if(j == m){
            cout << i-j << " ";
            j = lps[j-1];
        }else if(i < n && text[i] != pattern[j]){
            if(j == 0){
                i++;
            }else{
                j = lps[j-1];
            }
        }
    }


}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
