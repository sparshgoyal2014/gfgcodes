#include <iostream>
using namespace std;

void printNumbers(int number){
    if(number < 1)return;

    cout << number << " ";
    printNumbers(number-1);
    return;
}

int main() {
    printNumbers(5);
    return 0;
}
