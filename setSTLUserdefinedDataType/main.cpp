#include <iostream>
#include <set>

using namespace std;

struct Test{
    int data;

    bool operator<( Test t) const {
        return (this->data < t.data);
    }
};

int main() {
    set<Test> s;

    s.insert({5});
    s.insert({15});
    s.insert({10});

    for(Test t : s){
        cout << t.data << " ";
    }

    cout << endl;


    return 0;
}
