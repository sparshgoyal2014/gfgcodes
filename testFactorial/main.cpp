#include <iostream>
using namespace std;


int main() {
    int N = 10;
    unsigned long long int factorial = 1;
    for(int i=N; i>0; i--){
        factorial = factorial*i;
    }

    cout << factorial << endl;


    return 0;
}
