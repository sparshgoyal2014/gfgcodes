#include <iostream>
using namespace std;

int main() {

    char * ptr = "abc";
    cout << ptr << endl;

    cout << ("foobar" + 3 == "foobar" + 3) << endl;

    char c = 'a';

    char* ptr2 = &c;

    cout << *ptr2 << endl;

    char arr[5] = "hell";

    return 0;
}
