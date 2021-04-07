#include <iostream>
using namespace std;

int fibonacciNumber1(int n){
    if(n == 0 || n == 1)
        return n;
    return fibonacciNumber1(n-1) + fibonacciNumber1(n-2);
}

int fibonacciNumber2(int n){
    int c;
    if(n == 0 || n == 1)
        return n;
    int a = 0, b = 1;
    for(int i=2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }

    return c;
}


int main() {

    return 0;
}
