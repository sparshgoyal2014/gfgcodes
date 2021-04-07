#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str[] = "hello";

    cout << strlen(str) << endl;
    cout << strlen("helloworld") << endl;

    char str2[] = {'a', '\0', 'c'};
    char str3[] = {'a', 'b', 'c'};  

    cout << str2 << endl;

    return 0;
}
