#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void buildLPSArray(string str, int lps[]){
    int length = str.length();
//
//    memset(lps, 0, sizeof(*lps) * length);
//
//    for(int i=0; i<length; i++){
//        cout << lps[i] << " ";
//    }cout << endl;

    memset(lps, 0, sizeof(*lps) * length);

    int len = 0;

    for(int i=1; i<length; i++){
        if(str[i] == str[len]){
            lps[i] = len + 1;
            len++;
        }else{
            if(len == 0){
                lps[i] = 0;
            }else{
                while(str[i] != str[len]){

                    if(len == 0){
                        break;
                    }
                    len = lps[len - 1];

                }

                if(str[i] == str[len]){
                    lps[i] = len+1;
                    len++;
                }else{
                    lps[i] = 0;
                }


            }

        }

    }

    for(int i=0; i<length; i++){
        cout << lps[i] << " ";
    }cout << endl;


}


int main() {

    int lps[100];
    buildLPSArray("babbabbab", lps);

    return 0;
}
