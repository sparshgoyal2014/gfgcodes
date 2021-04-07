#include <iostream>
using namespace std;

int main() {

    int i=3;

    cout << ((++i)++) << endl;

    cout << i << endl;


    cout << "*******************" << endl;
    int y = 1;

    cout << (y++ + y++ + y++) << endl;
    cout << y << endl;


    return 0;
}
