#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

bool isSafe(int board[SIZE][SIZE], int N, int i, int j, int number){
    for(int k=0; k<N; k++){
        if(board[i][k] == number || board[k][j] == number){
            return false;
        }
    }

    int temp = sqrt(N);
    int rowStart = i - i % temp;
    int colStart = j - j % temp;

    for(int i=0; i<temp; i++){
        for(int j=0; j<temp; j++){
            if(board[rowStart + i][colStart + j] == number){
                return false;
            }
        }
    }


    return true;
}


bool solveSudokuUtil(int board[SIZE][SIZE], int N){
    int i,j;

    for(i=0; i<N; i++){
        bool breaked = false;
        for(j=0; j<N; j++){
            if(board[i][j] == 0){
                breaked = true;
                break;
            }
        }

        if(breaked){
            break;
        }
    }


    if(i == N && j == N){
        return true;
    }


    for(int number=1; number<=N; number++){
        if(isSafe(board, N, i, j, number)){
            board[i][j] = number;

            if(solveSudokuUtil(board, N)){
                return true;
            }

            board[i][j] = 0;
        }
    }


    return false;

}

void printSolution(int board[SIZE][SIZE], int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << board[i][j] << " ";
        }cout << endl;
    }
}


bool solveSudoku(int board[SIZE][SIZE], int N){
    if(solveSudokuUtil(board, N)){
        printSolution(board, N);
        return true;
    }

    return false;

}

int main() {

    int board[SIZE][SIZE] = {{1,0,3,0},
                             {0,0,2,1},
                             {0,1,0,2},
                             {2,4,0,0}};

    solveSudoku(board, 4);

    return 0;
}
