#include <iostream>
using namespace std;

int main() {
    int i=0;
    int ans = (++i) + (i++);

    ans = 0;

    ans = ++++i;
    cout << ans << endl;


    int j = 0;

    cout << &(++j);
    cout << &(j++);

    (j++) = 4;


    return 0;
}
