#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printNPrimeNumbers(int num){
    int n = (num - 1)/2;
    bool mark[n+1];
    memset(mark, false, sizeof(mark));

    for(int i=1; i<=n; i++){
        for(int j=i; i + j + 2*i*j <= n; j++){
            mark[i + j + 2*i*j] = true;
        }
    }

    if(num > 1){
        cout << 2 << " ";
    }

    for(int i=1; i<=n; i++){
        if(mark[i] == false){
            cout << 2 * i + 1 << " ";
        }
    }cout << endl;

}

int main() {

    printNPrimeNumbers(100);


    char arr[] = "hello";
    cout << & arr[0] << endl;


    return 0;
}
