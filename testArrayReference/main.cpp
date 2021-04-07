#include <iostream>
using namespace std;

void test(int (&arr)[5]){
    cout << sizeof(arr) << endl;
}

void test2(int arr[]){
    cout << sizeof(arr) << endl;
}

int main() {
    int arr[] = {5,4,2,3,1,6};
    cout << sizeof(arr) << endl;

    int (&ref)[] = arr;

    return 0;
}
