#include <iostream>
#include <sstream>

using namespace std;
int main() {

    string str = "hello";

    stringstream obj(str);

    obj >> str;

    int x = 07;

    cout << str << endl;


    return 0;
}
