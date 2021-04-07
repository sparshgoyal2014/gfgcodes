#include <iostream>
using namespace std;

void mergeArrays(int a[], int aSize, int b[], int bSize){
    int i=0, j=0;
    int c[aSize + bSize];
    while(i < aSize && j < bSize){
        if(a[i] < b[j]){
            c[i+j] = a[i];
            i++;
        }else{
            c[i+j] = b[j];
            j++;
        }
    }

    while(i < aSize){
        c[i+j] = a[i];
        i++;
    }

    while(j < bSize){
        c[i+j] = b[j];
        j++;
    }

    for(int i=0; i<aSize+bSize; i++){
        cout << c[i] << " ";
    }

    cout << endl;

}

int main() {

    int a[] = {2,10,15,20,40,44 };
    int b[] = {5,6,6,10,15};

    mergeArrays(a, 6, b, 5);

    return 0;
}
