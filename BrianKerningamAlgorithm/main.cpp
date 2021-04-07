#include <iostream>
using namespace std;

int setBits(int number){
    int count = 0;
    while(number > 0){
        number = number & (number - 1);  // it unsets the right most set bit and remaining right bits other than that set bit becomes set
        count++;
    }

    return count;
}

int main() {

    return 0;
}
