#include <iostream>
using namespace std;

int main() {
    string str = "geeksforgeeks";

    cout << str.find("geeks") << endl;
    cout << str.find("for") << endl;
    cout << str.substr(1, 2) << endl; // first argument is starting index of the substring and the second argument is length of the substring
    return 0;
}
