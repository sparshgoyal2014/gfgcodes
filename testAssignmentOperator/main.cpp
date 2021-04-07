#include <iostream>
#include <map>
using namespace std;
int number = 0;
class Animal{
public:
    Animal(){
        cout << "number is: " << number << endl;
        number++;
    }
};

int main() {

    Animal() = Animal() = Animal() = Animal();

    map<int, int> mp;
    cout << mp.size() << endl;
    mp[10]=mp.size();
    cout << mp[10] << endl;
    return 0;
}
