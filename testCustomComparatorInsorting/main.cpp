#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comparator(int a, int b){
    return true;
}


bool compare(string a, string b){
    return true;
}


int main() {

    int arr[9] = {5,4,6,1,2,7,3,9,8};

    sort(arr, arr+9, comparator);

    for(int i=0; i<9; i++){
        cout << arr[i] << " ";
    }cout << endl;


    cout << "================================" << endl;

    vector<string> test;

    for(int i=0; i<7; i++){
        test.push_back(string("0"));
    }

    sort(test.begin(), test.end(), compare);

    for(int i=0; i<test.size(); i++){
        cout << test[i] << " ";
    }cout << endl;


    return 0;
}
