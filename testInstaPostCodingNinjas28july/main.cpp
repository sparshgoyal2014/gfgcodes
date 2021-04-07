#include <iostream>
using namespace std;



int main() {

    int i;

#define x 2
    i = 1 + (2,4,6,8,10);

    cout << i << endl;

    cout << x << endl;

    return 0;
}


