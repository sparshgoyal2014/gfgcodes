#include <iostream>
using namespace std;

int main() {

    int a = 5;
    cout << ((++a) + (a++)) << endl;

    int b = 5;
    cout << b++ + ++b << endl;

    return 0;
}
