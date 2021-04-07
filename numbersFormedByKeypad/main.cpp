#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const string strAt[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void possibleWordsUtil(int arr[], int size, int currentIndex, string curr, vector<string> &result){
    if(currentIndex == size){
        result.push_back(curr);
        return ;
    }

    for(int i=0; i<strAt[arr[currentIndex]].length(); i++){
        possibleWordsUtil(arr, size, currentIndex+1, curr + strAt[arr[currentIndex]][i], result);
    }

}

vector<string> possibleWords(int arr[], int size){
    vector<string> result;
    possibleWordsUtil(arr, size, 0, "", result);

    return result;

}

int main() {

    int arr[] = {2,3,4};

    vector<string> result = possibleWords(arr, 3);

    for(string str: result){
        cout << str << " ";
    }cout << endl;

    return 0;
}
