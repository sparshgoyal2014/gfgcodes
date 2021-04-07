#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<string> list;
    list.push_back("a");
    list.push_back("ab");
    list.push_back("b");
    list.push_back("ac");
    list.push_back("bc");

    list = sort(list.begin(), list.end());

    cout << list[1] << endl;
    return 0;
}
