#include <iostream>
using namespace std;


int main() {

    double x = 2.0;

    int pow = 2147483648;
    cout << pow - 1 << endl;

    cout << (int)21474836485646464 << endl;
    double result = x;


    unsigned int y = -1;
    cout << y << endl;

    double dValue = 2.3;

    int iValue = dValue;


    for(int i=0; i<pow; i++){
        result = result*x;
        cout <<result << endl;
    }

    cout << result << endl;

    return 0;
}
