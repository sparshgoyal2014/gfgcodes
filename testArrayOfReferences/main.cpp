#include <iostream>
using namespace std;


int main() {

    int arr[5] = {1,2,3,4,5};

    int& arr2[5] = {arr[0], arr[1], arr[2], arr[3], arr[4]};

    int (&arr3)[5] = arr;

    return 0;
}
