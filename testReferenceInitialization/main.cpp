#include <iostream>
using namespace std;

int main() {

    int* const &x = new int(5);
    cout << x << endl;

    return 0;
}
