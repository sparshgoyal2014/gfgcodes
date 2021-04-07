#include <iostream>
#include <cmath>
//#include<math.h>

using namespace std;

int numberOfDigits(long number){
    int count = 0;
    while(number != 0){
        number = number / 10;
        count++;
    }

    return count;
}

int recursiveNumberOfDigits(long number){
    if(number == 0)
        return 0;
    return 1 + recursiveNumberOfDigits(number/10);
}

int logarithmicNumberOfDigits(long number){
    return floor(log10(number) + 1);
}



int main() {

    cout << numberOfDigits(2445);
    return 0;
}
