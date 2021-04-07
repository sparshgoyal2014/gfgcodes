#include <iostream>
using namespace std;


int main() {

    int arr[5] = {1,2,3,4,5};

    for(int i: arr){
        cout << i << " ";
    }

    cout << endl;

    int (& ref)[5] = arr;

    for(int i : ref){
        cout << i << endl;
    }

    return 0;
}
