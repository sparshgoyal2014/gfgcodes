#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

int main() {

    if(fork() && fork()){
        fork();
    }

    cout << "Hello World!" << endl;
    return 0;
}
