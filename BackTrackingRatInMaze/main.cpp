#include <iostream>
using namespace std;
#define ROW 100
#define COL 100


bool isValid(int mat[ROW][COL], int N, int M, int row, int col){
    if(row < N && col < M && mat[row][col] == 1){
        return true;
    }

    return false;
}

bool solveMazeUtil(int mat[ROW][COL], int N, int M, int row, int col, int result[ROW][COL]);

bool solveMaze(int mat[ROW][COL], int N, int M){
    int result[ROW][COL];
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            result[i][j] = 0;
        }
    }

    if(!solveMazeUtil(mat, N, M, 0, 0, result)){
        return false;
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << result[i][j] << " ";
        }cout << endl;
    }


    return true;

}



bool solveMazeUtil(int mat[ROW][COL], int N, int M, int row, int col, int (*result)[100]) {

    if(row == N-1 && col == M-1){
        result[row][col] = 1;
        return true;
    }

    if(isValid(mat, N, M, row, col)){
        result[row][col] = 1;
        if(solveMazeUtil(mat, N, M, row+1, col, result)){
            return true;
        }

        if(solveMazeUtil(mat, N, M,     row, col+1, result)){
            return true;
        }

        result[row][col] = 0;
    }


    return false;
}

int main() {
    int mat[ROW][COL] = {{1,0,1}, {1,1,0}, {0,1,1}}; // N = 3 and M = 3

    solveMaze(mat, 3,3);

//    for(int i=0; i<ROW; i++){
//        for(int j=0; j<COL; j++){
//            cout << mat[i][j] << " ";
//        }cout << endl;
//    }


    return 0;
}
