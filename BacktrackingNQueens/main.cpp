#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ROW 100
#define COL 100

/***
 * Test to print all the configurations iof four one's in 4x4 matrrix
 *
 *
 */

void printConfig(int result[ROW][COL], int N, int M){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << result[i][j] << " ";
        }cout << endl;
    }

    cout << endl;

}

void resetResult(int result[ROW][COL], int N, int M){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            result[i][j] = 0;
        }
    }
}

void printInArrayUtil(int mat[ROW][COL], int N, int M, int col, int result[ROW][COL]){
    if(col == M){
        printConfig(result, N, M);
        return ;
    }

    for(int i=0; i<N; i++){
        result[i][col] = 1;
        printInArrayUtil(mat, N, M, col+1, result);
        result[i][col] = 0;

//        resetResult(result, N, M);
    }



}

void printInArray(int mat[ROW][COL], int N, int M){
    int result[ROW][COL];
    resetResult(result, N, M);

    printInArrayUtil(mat, N, M, 0, result);
}



int main() {

    int mat[ROW][COL];

    printInArray(mat, 3, 3);

    return 0;
}
