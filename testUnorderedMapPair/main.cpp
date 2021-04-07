#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_map<int, int> map;

    map[0] = 1;
    map[1] = 2;
    map[2] = 3;
    map[3] = 4;
    map[4] = 5;



    cout << 'h'  << 'a' << 'd'  << endl;
    unordered_map<int, int>:: iterator itr;

    for(itr = map.begin(); itr != map.end(); itr++){
        cout << (*itr).first;
    }
    cout << endl;
    for(pair<int, int> p: map){
        cout << p.first << " " << p.second << endl;
    }

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    //arr decays to pointer to first element (which is array of 3 ints)

    int (*ptr)[3] = arr;


    unsigned char c = 255 + 66;

    cout << c << endl;


    cout << 18446744073709551615u << endl;
//
//    cout << 18446744073709551617 << endl;




    return 0;
}
