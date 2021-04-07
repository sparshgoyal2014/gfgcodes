#include <iostream>
#include <bits/stdc++.h>
using namespace std;


template <typename T>
void display(T x){
    cout << x << endl;
    return ;
}

int main() {

    unordered_map<int, int&> map;

    map[2] = 3;

    int x = 5;

    int& ref = x;

    int& ref2 = ref;


    map.insert(make_pair(1,2));

    map.insert(3);


    //////////////////////////////////////////
    display(3);



    return 0;
}
