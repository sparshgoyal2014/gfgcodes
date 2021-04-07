#include <iostream>
using namespace std;

template<typename  T>
class Animal{
public:
    void display(T x){
        cout << x << endl;
    }
};

int main() {

    Animal<int&> animal;
    animal.display(3);

    return 0;
}
