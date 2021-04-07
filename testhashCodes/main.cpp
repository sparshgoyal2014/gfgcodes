#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> set;

    set.insert(2);
    set.insert(1);
    set.insert(4);
    set.insert(3);
    set.insert(5);

    for(auto i: set){
        cout << i << " ";
    }cout << endl;



    unordered_set<int> set2;

    set2.insert(7);
    set2.insert(8);
    set2.insert(9);
    set2.insert(10);
    set2.insert(11);

    for(auto i: set2){
        cout << i << " ";
    }cout << endl;


    return 0;
}
