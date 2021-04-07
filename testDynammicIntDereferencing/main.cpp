#include <iostream>
using namespace std;


int main() {
    cout << new int(5) << endl;
    *(new int(3)) = 4;

    int x = 7;
    new int(10) = &x;

    int *const &ptr = new int(89);
    cout << &(new int(34))


    // ----- NOTES-------//

    //just like &x returns r-value similarly new int(6) operator returns r-value.
    // *ptr will returns l-value independent of ptr(l-value or r-value)/.

    return 0;
}
