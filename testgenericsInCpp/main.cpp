#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int,  int&> map;

    int x = 4;
    map.insert({1,x});

    cout << map.begin()->second << endl;

    int &y = 4;

    return 0;
}
