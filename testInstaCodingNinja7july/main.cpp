#include <iostream>
using namespace std;

namespace myFunctions{
    void fun(){
        cout << "This is a fun function" << endl;
    }

    void fun(int a){
        cout << a << endl;
    }
}

int main() {

    myFunctions::fun(2.3f);

    return 0;
}
