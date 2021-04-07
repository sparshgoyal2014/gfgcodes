#include <iostream>
using namespace std;


const int& testFunction(){
    return 4;
}




int main() {
    cout << testFunction() << endl;

    int x = 5555555555555555555;

    return 0;
}
