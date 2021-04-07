#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkOverlapping(pair<int, int> p1, pair<int, int> p2){
    if(p1.first <= p2.first && p2.first <= p1.second){
        return true;
    }

    if(p2.first <= p1.first && p1.first <= p2.second){
        return true;
    }

    return false;
}

int main() {
    pair<int, int> p1 = {1,5};
    pair<int, int> p2 = {7,10};

    if(checkOverlapping(p1,p2)){
        cout << "yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}
