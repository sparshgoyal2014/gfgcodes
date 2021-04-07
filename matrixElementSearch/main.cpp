#include <iostream>
using namespace std;

int const R = 5;
int const C = 5;

void searchInSorted(int arr[R][C], int x){
    int i=0; int j=C-1;

    while(i<R && j>=0){
        if(arr[i][j] == x){
            cout << "(" << i << ", " << j <<  ")" << endl;
            return ;
        }else if(x < arr[i][j]){
            j--;
        }else{
            i++;
        }
    }

    cout << "NOT FOUND" << endl;
}


int main() {
    int arr[R][C] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    searchInSorted(arr, 13);
    return 0;
}
