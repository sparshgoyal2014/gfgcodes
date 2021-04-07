// Smallest Window in a string containing all the characters of another string

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void smallestWindow(string str, string pat){
    int lenStr = str.length();
    int lenPat = pat.length();

    if(lenStr < lenPat){
        cout << "No such window Exist" << endl;
        return ;
    }


    int hashStr[256] = {0};
    int hashPat[256] = {0};

    for(int i=0; i<lenPat; i++){
        hashPat[pat[i]]++;
    }

    int start = 0;
    int count = 0;
    int minLength = INT_MAX;
    int startIndex = -1;

    for(int i=0; i<lenStr; i++){
        hashStr[str[i]]++;

        if(hashPat[str[i]] != 0 && hashStr[str[i]] <= hashPat[str[i]]){
            count++;
        }

        if(count == lenPat){
            while(hashStr[str[start]] > hashPat[str[start]] || hashPat[str[start]] == 0){
                if(hashStr[str[start]] > hashPat[str[start]]){
                    hashStr[str[start]]--;
                }

                start++;
            }
        }

        int lenWin = i - start + 1;

        if(minLength > lenWin){
            minLength = lenWin;
            startIndex = start;
        }
    }


    if(startIndex == -1){
        cout << "No such Window Exist" << endl;
        return ;
    }

    str.substr(startIndex, minLength);

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
