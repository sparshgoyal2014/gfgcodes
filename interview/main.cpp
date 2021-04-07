#include <iostream>
using namespace std;

void swap1(int *ptr1, int *ptr2){
    int temp = *ptr1; // *ptr1 = 'A'
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void reverseString(char arr[], int size){
    if(size == 1){
        return ;
    }

    int first = 0;
    int last = size -1;

    while(first < last){
//        swap1(&arr[first], &arr[last]);
        first++;
        last--;
    }

}


class Animal{

};


int main() {

//    float f = (float)1.2;
    float f = (double)1.2;

    int a = 4;
    double d = 5.3;

    int *ptr1 = (int*)&d;

    char* chPtr = ptr1;


    int x = (int)Animal();



    return 0;
}
