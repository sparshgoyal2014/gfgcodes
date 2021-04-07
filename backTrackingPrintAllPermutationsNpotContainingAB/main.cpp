#include <iostream>
using namespace std;

bool isSafe(string str, int l, int r, int i){
    if(l != 0 && str[l-1] == 'A' && str[i] == 'B'){
        return false;
    }

    if(r == l+1 && str[i] == 'A' && str[l] == 'B'){
        return false;
    }



    return true;
}

void printPermutationsUtil(string str, int l, int r){   // prints the permutations not containing "AB"
    if(l == r){

        if(str[l-1] == 'A' && str[l] == 'B'){
            return;
        }
        cout << str << " ";
        return;
    }

    for(int i=l; i<=r; i++){

        if(isSafe(str, l, r, i)){
            swap(str[l], str[i]);
            printPermutationsUtil(str, l+1, r);
            swap(str[l], str[i]);
        }

    }
}

void printPermutations(string str){
    printPermutationsUtil(str, 0, str.length()-1);
}


int main() {

    string str = "ABCD";

    printPermutations(str);


    return 0;
}
