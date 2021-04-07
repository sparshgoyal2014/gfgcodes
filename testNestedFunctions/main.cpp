#include <iostream>
using namespace std;

void outerFunction(){
    cout << "This is Outer function declared and defined in the global scope" << endl;

    void inner(){
        cout << "This is Inner function declared and defined in the local scope of Outer function" << endl;
    }

    inner();
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
