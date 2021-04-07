#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Animal{

public:

    Animal(){
        cout << " THis is Animal class" <<  endl;
    }
};


int main() {

    map<int, const int> map;

    map.insert({1,5});

    vector<int>* vec = new vector<int>();

    vec->push_back(4);

    cout << vec->operator[](0) << endl;

    cout << vec[0] << endl;



    return 0;
}
