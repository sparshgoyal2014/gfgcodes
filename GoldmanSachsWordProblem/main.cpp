#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSafe(string grid[], int size, string word, int currentWordIndex, int row, int col){
    if(row >= 0 && row < size && col >= 0 && col < size && grid[row][col] == word[currentWordIndex]){
        return true;
    }

    return false;
}

bool countOccurenceUtil(string grid[], int size, string word, int row, int col, int currentWordIndex, int direction, int &result, int xshift[], int yShift[]){
    if(currentWordIndex == word.length()){
        result++;
        return true;
    }

    if(isSafe(grid, size, word, currentWordIndex, row, col)){
        if(countOccurenceUtil(grid, size, word, row + xshift[direction], col + yShift[direction], currentWordIndex+1, direction, result, xshift, yShift)){
            return true;
        }else{
            return false;
        }
    }

    return false;
}


int countOccurences(string grid[], int size, string word){
    int result = 0;

    int xShift[] = {-1,-1,-1,0,0,1,1,1};
    int yShift[] = {-1,0,1,-1,1,-1,0,1};

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){

            if(grid[i][j] == word[0]){
                for(int k=0; k<8; k++){
                    countOccurenceUtil(grid, size, word, i+xShift[k], j + yShift[k], 1, k, result, xShift, yShift);
                }
            }


        }
    }


    return result;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
