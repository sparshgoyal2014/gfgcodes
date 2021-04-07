#include <iostream>
using namespace std;


int main() {
    int x = 4;
    int &ref = x;

    int && rref = 4;

    int val = ref;

    int &val2 = rref;

    return 0;
}
