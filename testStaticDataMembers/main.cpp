#include <iostream>
using namespace std;

class Animal{
public:

    static int number ;

};

int Animal:: number;

int main() {

    cout << Animal::number << endl;

    return 0;
}
