#include <iostream>
using namespace std;

int fibonacciRecur(int n){  // nth fibonnaci number  // pure recursive (same sub problems recomputed)
    if(n == 0 || n == 1) {
        return n;
    }

    return fibonacciRecur(n-1) + fibonacciRecur(n-2);
}


int memo[100];  // initialize all elements in it to -1
int fibonacciMemoization(int n){  // top down approach  from main problem to subproblem  // same subproblems will not be computed again cause we store their results in a separate array
    if(memo[n] != -1){
        return memo[n];
    }

    int result;

    if(n == 0 || n== 1){
        result = n;
    }else{
        result = fibonacciMemoization(n-1) + fibonacciMemoization(n-2);
    }
    memo[n] = result;

    return memo[n];

}

int fibonacciTabulation(int n){  // bottom up approach
    int fib[n+1];
    fib[0] = 0; fib[1] = 1;

    for(int i=2; i<=n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib[n];
}




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
