#include <iostream>
using namespace std;

int main() {
    constexpr unsigned int id = 100;
    unsigned char arr[] = {id%3, id%5};

    cout << static_cast<unsigned int>(arr[0]) << endl;
    cout << static_cast<unsigned int>(arr[1]) << endl;

    return 0;
}
