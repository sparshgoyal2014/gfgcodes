#include <iostream>
#include<unordered_set>
#include <bits/stdc++.h>

using namespace std;

int main() {

    unordered_set<int> set;
    set.insert(10);
    set.insert(15);
    set.insert(20);
    set.insert(21);
    set.insert(23);


    // all elements may come in any order in the output
    for(int x: set){
        cout << x << " ";
    }
    cout << endl;

    cout << *set.begin() << endl;

    cout << "==============================================" << endl;
    for(auto itr = set.begin(); itr != set.end(); itr++){
        cout << *(itr) << " ";
    }cout << endl;


    cout << "Size of unordered_set : " << set.size() << endl;
    set.clear();
    for(auto itr = set.begin(); itr != set.end(); itr++){
        cout << *(itr) << " ";
    }cout << endl;

//    cout << *set.find(15) << endl;  // run time error on null pointer

    set.insert(15);
    set.insert(20);
    set.insert(25);
    set.insert(30);
    set.insert(35);

    if(set.find(20) == set.end()){
        cout << "Element not found" << endl;
    }else{
        cout << "Element is found:" << *set.find(20) << endl;
    }


    // Erase function

    set.erase(30);

    auto itr = set.find(35);
    set.erase(itr);

    cout << set.size() << endl;

    set.erase(set.begin(), set.end());

    cout << set.size() << endl;



    cout << "=============================" << endl;

    unordered_set<int> set2;
    set2.insert(10);
    set2.insert(15);
    set2.insert(20);
    set2.insert(21);
    set2.insert(23);


    // all elements may come in any order in the output
    for(int x: set2){
        cout << x << " ";
    }
    cout << endl;

    vector<int> vector;

    return 0;
}
