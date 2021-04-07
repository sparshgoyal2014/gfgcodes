#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define val a 10

int main() {

    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    char *c[] = {"GeksQuiz", "MCQ", "Test", "Quiz"};
    char **cp[] = {c + 3, c + 2, c + 1, c};
    char ***cpp = cp;

    cout << **++cpp << endl;
    cout << *--*++cpp + 3 << endl;
    cout << *cpp[-2] + 3 << endl;
    cout << cpp[-1][-1] + 1;

    if(10/val == 1){
        cout << "yes";
    }else{
        cout << "No";
    }cout << endl;


    return 0;
}
