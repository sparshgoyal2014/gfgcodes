#include <iostream>
using namespace std;

void printPermutationsUtil(string str, int l, int r){
    if(l == r){
        cout << str << " ";
        return ;
    }

    for(int i=l; i<=r; i++){
        swap(str[l], str[i]);
        printPermutationsUtil(str, l+1, r);
        swap(str[l], str[i]);
    }
}

void printAllPermutations(string str){
    printPermutationsUtil(str, 0, str.length()-1);
}


int main() {

    string str = "abcde";

    printAllPermutations(str);

    return 0;
}
