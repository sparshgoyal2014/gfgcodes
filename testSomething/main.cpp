#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c= 15;

    int *arr[] = {&a, &b, &c};

    cout << arr[1] << endl;

    int i=0;
    for(cout << "Hello\n"; i<5; i++){
        cout << "Hi" << endl;
    }

    return 0;
}
