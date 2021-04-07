#include <iostream>
#include <bits/stdc++.h>

using namespace std;


// this is not the full proof correct solution // consult the geeksforgeeks video
void printPatternIndex(string text, string pattern){
    int h=1;
    int d = 5;
    for(int i=0; i<pattern.length(); i++){
        h = h*d;   // d^(m-1) computation
    }

    int p = 0;
    int t = 0;

    for(int i=0; i<pattern.length(); i++){
        p = (p*d + pattern[i]);
        t = (t*d + text[i]);
    }

    for(int i=0; i<text.length() - pattern.length(); i++){
        if(p == t){
                for(int j=0; j<pattern.length(); j++){
                        if(text[j] != pattern[j]){
                            break;
                        }

                        cout << i << " ";
                }
        }

        t = (d * (t - text[i]) * h + text[i+ pattern.length()]);

    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
