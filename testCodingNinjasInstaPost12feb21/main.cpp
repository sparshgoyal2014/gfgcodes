#include <iostream>
using namespace std;


int main() {

    const char* arr[] = {"Rose", "Teddy", "Chocolate", "Valentine"};

    const char*(*ptr)[4] = &arr;

    cout << ++((*ptr)[2]) << endl;

//    *(arr[0]) = 'a';

//    "hello" = ("hello" + 1);


    int const arr2[4] = {1,1,2,3};



    return 0;
}
