#include <iostream>
using namespace std;

int display(int number){
    cout << number << endl;
    return 0;
}

int main() {

    void (*ptr)(int) = display;

    (*ptr)(4);

    int x = 5;

    void *ptr2 = &x;


    int *ptr3 = (int*)ptr2;



    return 0;
}
