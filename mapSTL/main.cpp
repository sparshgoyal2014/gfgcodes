#include <iostream>
#include <map>
using namespace std;


int main() {
    map<int, int> mapIncreasing;   // it stores the unique keys in sorted order with corresponding value

    mapIncreasing.insert({10, 2200});
    mapIncreasing[20] = 400;  //if present it will modify the value , if not present then  it will insert the key with value 0

    for(auto x : mapIncreasing){
        cout << x.first << ' ' << x.second << endl;
    }

    cout << endl;

    for(auto itr = mapIncreasing.begin(); itr != mapIncreasing.end(); itr++){
        cout << itr->first << " " <<  (*itr).second << endl;
        cout <<
    }

    cout << endl;

    return 0;
}
