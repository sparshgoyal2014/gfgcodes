#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {

    unordered_set<int> set;

    set.insert(5);
    set.insert(3);
    set.insert(1);
    set.insert(2);
    set.insert(6);


    sort(set.begin(), set.end());



    return 0;
}
