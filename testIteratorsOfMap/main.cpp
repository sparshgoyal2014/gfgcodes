#include <iostream>
#include <map>
#include <vector>

using namespace std;




int main() {

    map<int, int> map;

    map.insert(make_pair(1,2));
    map.insert(make_pair(2,2));
    map.insert(make_pair(3,2));
    map.insert(make_pair(4,2));
    map.insert(make_pair(5,2));;
    map.insert(make_pair(6,2));


    int i = map.lower_bound(3) - map.begin();

    vector<int> vector;

    vector.push_back(1);
    vector.push_back(1);
    vector.push_back(1);
    vector.push_back(1);
    vector.push_back(1);
    vector.push_back(1);
    vector.push_back(1);


    int j = vector.begin() - vector.end();


    return 0;
}
