#include <iostream>
using namespace std;

int test(int x){
    return x;
}

int main() {

    int x = 5;
    5 = x;

    test(x) = 5;

    cout << &test(x);
    return 0;
}
