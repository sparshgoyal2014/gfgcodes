#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return b<a;
}

struct Animals{
    string name;

    bool operator>(const Animals &a1) const {
        return this->name[0] > a1.name[0];
    }
};

int main() {
//
//    vector<int>vec;
//    vec.push_back(0);
//    vec.push_back(1);
//    vec.push_back(2);
//    vec.push_back(3);
//
//    sort(vec.begin(), vec.end(), );


//
//    priority_queue<Animals, vector<Animals>, greater<Animals>> pq;
//
//    pq.push(Animals{"Pig"});
//    pq.push(Animals{"Cat"});
//    pq.push(Animals{"Cow"});
//
//
//    cout << pq.top().name << " ";
//    pq.pop();
//    cout << pq.top().name << " ";
//    pq.pop();
//    cout << pq.top().name << " ";
//    pq.pop();
//
//



    int arr[] = {1,2,3,4,5};

    int * ptr = arr;
    const int* ptr2 = arr;

    int * const ptr3 = arr;

    int *  const &refPtr = arr;


//    const int arr2[] = {1,2,2,4,5};
//    int * ptr4 = arr2;
//




//    const int a = 4;
//
//    int* iPtr = &a;
//


    return 0;
}

