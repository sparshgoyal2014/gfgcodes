#include <iostream>
#include <cmath>

using namespace std;

void printPowerSet(string str){
    int length = str.length();
    int powSize = pow(2,length);

    for(int counter=0; counter<powSize; counter++){
        for(int j=0; j<length; j++){
            if((counter &( 1<<j)) != 0){
                cout << str[j];
            }
        }
        cout << endl;
    }
}

int main() {

    string str = "abc";
    printPowerSet(str);
    return 0;
}
