#include <iostream>
using namespace std;

int minOperations(string str1, string str2, int m, int n){  // minimum nuber of operations to convert str1 to str2

    if(m == 0){
        return n;
    }

    if(n == 0){
        return m;
    }

    if(str1[m-1] == str2[n-1]){
        return minOperations(str1, str2, m-1, n-1);
    }

    return 1 + min(minOperations(str1, str2, m-1,n), min(minOperations(str1, str2, m, n-1), minOperations(str1, str2, m-1, n-1)));
}

int editDistanceTabulation(){

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
