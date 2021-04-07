#include <iostream>
using namespace std;

int const R = 4;
int const C = 4;

void transpose(int arr[R][C]){
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(i < j){
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
}

void print(int arr[R][C]){
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main() {
    int arr[R][C] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    transpose(arr);
    print(arr);
    return 0;
}
