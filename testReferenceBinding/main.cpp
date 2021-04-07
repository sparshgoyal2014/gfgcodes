#include <iostream>
using namespace std;

int main() {
    int x = 5;

    int &y= x;

    int z = 2;

    y = 101;

    y = z;

    return 0;
}
