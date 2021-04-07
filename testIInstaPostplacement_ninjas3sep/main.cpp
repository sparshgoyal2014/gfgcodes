#include <iostream>
using namespace std;

int main() {

    char ch = 65;

    int* ptr = (int*)&ch;

    cout << (*(int*)ptr) << ++(*(int*)(ptr)) << endl;

    return 0;
}
