#include <iostream>
using namespace std;

int countSetBits(int number){
    int count = 0;
    while(number != 0){
        if((number & 1) == 1){
            count++;
            number = number >> 1;
        }else{
            number = number >> 1;
        }
    }

    return count;
}

bool isPowerOf2(int number){
    if(number == 0)return false;

    return ((number & (number-1)) == 0);
}



int main() {

    cout << countSetBits(5) << endl;
    cout << countSetBits(7) << endl;
    cout << countSetBits(13) << endl;
    return 0;
}
