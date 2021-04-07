#include <iostream>
using namespace std;

int main() {

    int a = 10, b = 11, c = 5, d = 6;

    int arr[4] = {&a, &b, &c, &d};

    cout << *arr[*arr[1]-9];

    return 0;
}
