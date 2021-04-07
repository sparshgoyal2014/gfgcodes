#include <iostream>
using namespace std;


int main() {
    int x = 5;
    const int* ptr = &x;
    int *ptr2 = ptr;
    return 0;
}
