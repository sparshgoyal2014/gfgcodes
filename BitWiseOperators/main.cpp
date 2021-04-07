#include <iostream>
using namespace std;

int main() {
    int x = 3;
    cout << x << 1 << endl;
    cout << (x << 1) << endl;

//    cout << x >> 3 << endl;  // errpr: You must use brackets

    cout << sizeof(x) << endl;
    cout << (~x) << endl;

    unsigned int y = 3;
    cout << (~y) << endl;
    cout <<(~(unsigned int)3) << endl;

    unsigned int z = 3;
    cout << (~z) << endl;


    return 0;
}

/****
 * Important points on signed and unsigned:
 * 1. By default 'int' is considered as 'signed int' signed keyword is redundant
 * 2. in case of signed numbers , last bit decides the number is negative or not for eg: 1111111110111110001010 here last bit is 1 so number is negative
 * 3. to get the decimal representation of signed numbers we have to calculate 2's complement.
 * 4.
 */
