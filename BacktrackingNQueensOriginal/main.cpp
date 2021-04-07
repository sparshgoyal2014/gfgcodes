#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define SIZE 100

bool isSafe(int board[SIZE][SIZE], int N, int row, int col){
    if(row >= N || col >= N){
        return false;
    }

    for(int i=col; i>=0; i--){
        if(board[row][i] == 1){
            return false;
        }
    }

    for(int i=row, j = col; i>=0 && j >=0; i--, j--){
        if(board[i][j] == 1){
            return false;
        }
    }

    for(int i=row, j=col; i < N && j >=0; i++, j--){
        if(board[i][j] == 1){
            return false;
        }
    }

    return true;
}

bool placeNQueensUtil(int board[SIZE][SIZE], int N, int col){
    if(col == N){
        return true;
    }

    for(int i=0; i<N; i++){
        if(isSafe(board, N, i, col)){
            board[i][col] = 1;
            if(placeNQueensUtil(board, N, col+1) == true){
                return true;
            }
            board[i][col] = 0;
        }
    }

    return false;
}

void printConfig(int board[SIZE][SIZE], int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << board[i][j] << " ";
        }cout << endl;
    }
}

bool placeNQueens(int board[SIZE][SIZE], int N){
    if(placeNQueensUtil(board, N, 0)){
        printConfig(board, N);
        return true;
    }

    return false;
}


int main() {

    int board[][SIZE] = {0};
    placeNQueens(board, 10);



    return 0;
}
