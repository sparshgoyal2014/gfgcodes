#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printAllSubsequences(string str, int index, string current){
    if(index == str.length()){
        cout << current << endl;
        return;
    }

    printAllSubsequences(str, index+1, current);
    printAllSubsequences(str, index+1, current + str[index]);

}


int main() {


    string str = "abcde";

    printAllSubsequences(str, 0, "");

    return 0;
}
