#include <iostream>
using namespace std;

int const N = 3;

void getCofactor(int arr[N][N], int temp[N][N], int p, int q, int n){
    int i=0; int j=0;

    for(int row = 0; row < n; row++){
        for(int col = 0; col<n; col++){
            if(row != p && col != q){
                temp[i][j] = arr[row][col];
                j++;

                if(j == n-1){
                    j = 0;
                    i++;
                }
            }
        }
    }
}


int determinant(int arr[N][N], int n){

    if(n == 1){
        return arr[0][0];
    }

    int result = 0;
    int temp[N][N];
    int sign = 1;

    for(int i=0; i<n; i++){
        getCofactor(arr, temp, 0, i, n);

        result += sign*arr[0][i]*determinant(temp, n-1);
        sign = -sign;
    }

    return result;
}


int main() {
    int arr[N][N] = {1,2,3,4,5,6,7,8,9};

    cout << determinant(arr,N);

    return 0;
}
