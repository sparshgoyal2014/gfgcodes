#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,5};

    int arr2[] = arr;

    int (&arr3)[sizeof(arr)/ sizeof(int)] = arr;


    return 0;
}
