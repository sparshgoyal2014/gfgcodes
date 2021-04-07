#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> map;

    map["gfg"];  // default value is zero
    map["abc"] = 25;

    map.insert({"avv", 55});

    for(auto x: map){  // standard forEach loop to traverse through any container in c++
        cout << x.first << " " << x.second << endl;
    }

    cout << endl;

    return 0;
}
