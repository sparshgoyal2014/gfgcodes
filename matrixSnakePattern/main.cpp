#include <iostream>
using namespace std;

void printSnake(int (*arr)[4], int m){
    for(int i=0; i<m; i++){
        if(i%2 == 0){
            for(int j=0; j<4; j++){
                cout << arr[i][j] << " ";
            }
        }else{
            for(int j=3; j>=0; j--){
                cout << arr[i][j] << " ";
            }
        }

    }

    cout << endl;
}

void test(int *ptr, int size){
    for(int i=0; i<size; i++){
        cout << ptr[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    printSnake(arr, 4);

    test(&arr[0][0], 16);


    return 0;
}
