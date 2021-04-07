#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << (char)(*("Hello") + (char)1) << endl;

    cout << "helloWorld" + 2 << endl;

    const char *ch[] = {"hello", "world"};

    cout << sizeof(ch) << endl;

    return 0;
}
