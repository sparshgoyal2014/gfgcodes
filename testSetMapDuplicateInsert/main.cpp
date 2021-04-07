#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    unordered_set<int> set;

    set.insert(5);
    set.insert(5);
    set.insert(5);
    set.insert(5);
    set.insert(5);

    cout << set.size() << endl;


    unordered_map<int, int> map;

    map.insert({1,5});
    map.insert({1,10});

    cout << map.size() << endl;
    cout << map.begin()->second << endl;

    return 0;
}
