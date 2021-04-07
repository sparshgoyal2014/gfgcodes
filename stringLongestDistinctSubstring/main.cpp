#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkDistinct(string str, int i, int j){
    bool visited[256] = {0};
    for(int k=i; k<=j; k++){
        if(visited[str[k]] == true){
            return false;
        }

        visited[k] = true;
    }

    return true;
}

int longestDistinctCount(string str){

    int result = 0;
    for(int i=0; i<str.length(); i++){
        for(int j=i; j<str.length(); j++){
            if(checkDistinct(str, i, j) == true){
                result = max(result, j-i+1);
            }
        }
    }

    return result;
}


// O(n^2) approach

int longestDistinctEfficient(string str){
    int result = 0;
    for(int i=0; i<str.length(); i++){
        bool visited[256] = {false};
        for(int j=i; j<str.length(); j++){
            if(visited[str[j]] == true){
                break;
            }else{
                result = max(result, j-i+1);
                visited[str[j]] = true;
            }
        }
    }

    return result;
}

// linear time solution
int longestSubString(string str){
    vector<int> previousIndex(256, -1);  // vector with initial size 256 and with values -1

    int i = 0;
    int result = 0;
    for(int j=0; j<str.length(); j++){
        i = max(i, previousIndex[str[j]] + 1);
        int maxEnd = j - i + 1;
        result = max(result, maxEnd);
        previousIndex[str[j]] = j;
    }

    return result;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
