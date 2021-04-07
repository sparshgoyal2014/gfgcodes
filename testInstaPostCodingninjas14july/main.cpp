#include <iostream>
using namespace std;

int main() {

    static int num = 8;
    cout << num = num - 2 << endl;

    if(num){
        main();
    }


    return 0;
}
