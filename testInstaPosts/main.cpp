#include <iostream>
using namespace std;

int main() {

    char *ptr = "Hello";

    char* ptr2 = ptr;

    while(*ptr != '\0'){
        cout << (*ptr)++ << endl;
    }
    return 0;
}
