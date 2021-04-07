#include <iostream>
using namespace std;

int main() {


    int array[3] = {1,2,3};
    int (*ptr)[3] = &array;



   auto ptr2 = &ptr;

   int (*ptr5)[3];


    return 0;
}
