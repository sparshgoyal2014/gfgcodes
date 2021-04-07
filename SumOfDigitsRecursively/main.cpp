#include <iostream>
using namespace std;

int sumOfDigits(int number){
    if(number / 10 == 0)return number;
    int remainder = number % 10;

    return remainder + sumOfDigits(number/10);
}


int main() {
    cout << sumOfDigits(254) << endl;
    return 0;
}
