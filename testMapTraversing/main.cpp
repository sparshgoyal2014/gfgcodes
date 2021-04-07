#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {

    unordered_set<int> set;

    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(5);
    set.insert(6);

    unordered_set<int> :: iterator  itr = set.begin();

    for(int i=0; i<set.size(); i++){
        cout << *(set.begin() + i) << endl;
    }



    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    for(int i=0; i<vec.size(); i++){
        cout << *(vec.begin() + i) << endl;
    }


    return 0;
}
