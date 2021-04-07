#include <iostream>
using namespace std;

int test(int a, int arr[a]){
    cout  << arr[0] << endl;
}



int main() {

    int arr[] = {2,1,3,5,4};

    test(5, arr);


    bool* visited[10];

    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            visited[i][j] = false;
        }
    }

    return 0;
}
