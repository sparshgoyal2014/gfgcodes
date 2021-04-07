#include <iostream>
#include <set>

using namespace std;

class Animal{

};

int main() {

    set<int> s;  // it includes all the unique elements in sorted order

    s.insert(10);
    s.insert(5);
    s.insert(20);



    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;

    for(int number : s){
        cout << number << " ";
    }
    cout << endl;


    set<int, greater<int>> decreasingSet;
    decreasingSet.insert(5);
    decreasingSet.insert(15);
    decreasingSet.insert(10);

    for(auto itr = decreasingSet.begin(); itr != decreasingSet.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;

    cout << s.size() << " " << decreasingSet.size() << endl;

    // set.find(__value__)  it will return reference to that value while set.count(__value__) will return (1 or 0) depending on the value is present or not;
    // set.clear()  clear the whole set // set.erase(__value__) will remove that particular value from the set


    auto itr = s.find(5);

    return 0;
}
