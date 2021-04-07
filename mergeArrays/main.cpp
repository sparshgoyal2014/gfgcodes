#include <iostream>
using namespace std;

struct Array{
    int arr[20];
    int length;
    int size;
};

struct Array* merge(struct Array& a, struct Array& b){
    int i=0, j=0, k=0;

    struct Array * ptr;
    ptr = new struct Array;

    ptr->length = a.length + b.length;
    ptr->size = 20;

    while(i < a.length && j < b.length){
        if(a.arr[i] < b.arr[j]){
            (*ptr).arr[k++] = a.arr[i++];
        }else{
            (*ptr).arr[k++] = b.arr[j++];
        }
    }
    while (i < a.length)
        (*ptr).arr[k++] = a.arr[i++];

    // Store remaining elements of second array
    while (j < b.length)
        (*ptr).arr[k++] = b.arr[j++];

    return ptr;
}
void display(struct Array array){
    for(int i=0; i<array.length; i++){
        cout << array.arr[i] << " ";
    }

    cout << endl;
}


int main() {
    struct Array a = {{2,4,6,8,10},5,20};
    struct Array b = {{1,3,5,7,9},5,20};
    struct Array* c;
    c = merge(a,b);
    display(*c);
    return 0;
}
