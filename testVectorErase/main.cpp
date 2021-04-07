#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << vec.size() << endl;

    vec.erase(vec.begin() + 1);


    for(int x : vec){
        cout << x << " ";
    }cout << endl;


    cout << vec.size() << endl;

    vec.erase(vec.begin() + vec.size());



    for(int x : vec){
        cout << x << " ";
    }cout << endl;


    cout << vec.size() << endl;



    return 0;
}
