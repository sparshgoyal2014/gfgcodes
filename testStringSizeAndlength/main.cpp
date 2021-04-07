#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    char arr[] = {'a', 'b','c', '\0', 'd'};

    cout << sizeof(arr) << endl;

    cout << strlen(arr) << endl;


    string str = "abc\0fsff";
    cout << str << endl;

    cout << str.size() << "  " << str.length() << endl;

    cout << '2  ' - '0' << endl;



    return 0;
}
