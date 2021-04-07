#include <iostream>
using namespace std;

int main() {
    int i = 10;

    const int &j = i;

    i = 20;

    cout << i << j << endl;
    return 0;
}
