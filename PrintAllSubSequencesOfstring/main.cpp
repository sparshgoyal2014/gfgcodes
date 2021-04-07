#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void generateSubsequencesHelper(string str, int currentInddex, string curr, vector<string> &result){
    if(currentInddex == str.length()){
        result.push_back(curr);
        return;
    }

    generateSubsequencesHelper(str, currentInddex + 1, curr, result);
    generateSubsequencesHelper(str, currentInddex + 1, curr+ str[currentInddex], result);

}


vector<string> generateSubsequences(string str){
    vector<string> result;
    generateSubsequencesHelper(str, 0, "", result);

    return result;
}

int main() {

    string str = "abcd";

    vector<string> result = generateSubsequences(str);

    for(string str: result){
        cout << str << " ";
    }cout << endl;

    return 0;
}
