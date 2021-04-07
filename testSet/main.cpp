#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    unordered_set<int> set;

    set.insert(1);

    *set.begin() = 4;

    set.begin()

    cout << &(*set.begin()) <<endl;

    cout << set.begin() << endl;

    return 0;
}
