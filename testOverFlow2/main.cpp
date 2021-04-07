#include <iostream>
#include <climits>
using namespace std;


int main() {
    int x = 32767 + 1;

    cout << INT_MAX << endl;
    cout << x << endl;

    int y = 2147483648;
    cout << y << endl;


    cout << 2147483647 + 1 << endl;


    return 0;
}
