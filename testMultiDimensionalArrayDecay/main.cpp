#include <iostream>
using namespace std;


int main() {

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//    arr[1] = 5;

    cout << sizeof(arr[1]) << endl;


    cout << typeid(arr[1]).name() << endl;

    return 0;
}
