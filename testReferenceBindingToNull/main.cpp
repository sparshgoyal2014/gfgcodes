#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

//    int x = 5;
//    int* ptr = NULL;
//
//    int* &reftoPtr = ptr;
//
//    vector<int> vec;
//    sort(vec.begin(), vec.end());
//
//
//    cout << vec[1];

//    int * ptr = nullptr;
//
//    cout << *ptr << endl;
//

    int * danglingPtr;
    {
        int n = 3;
        danglingPtr = &n;
    }

    cout << *danglingPtr << endl;


    int y = 2;

    int* danglingPtr2 = &y;


    delete danglingPtr2;

    cout << *danglingPtr2 << endl;


    return 0;
}
