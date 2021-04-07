#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int main() {

    unsigned int x = UINT32_MAX;

    cout << x+1 << endl;


    vector<int> vector;

    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(5);

    cout << *(vector.begin() + 3);


    while(true){
        cout << "hello";
    }

    cout << "hi";

    return 0;
}
