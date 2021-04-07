#include <iostream>
using namespace std;

int main() {

    int (*ptr)[5] = new int[5][5];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            (*(ptr+i))[j] = i;
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout << (*(ptr+i))[j] << " ";
        }cout << endl;
    }


    cout << "=========================" << endl;
    int *ptr2 = new int(5);

    cout << "Address of pointer : " << ptr2 << endl;
    delete ptr2;




    ptr2 = new int;
    cout << "Address of pointer : " << ptr2 << endl;


    cout << *ptr2 << endl;

    cout << "=========================" << endl;

    int *arrPtr = new int[5];

    arrPtr[1] = 5;
    arrPtr[0] = 3;


    delete [] arrPtr;

    arrPtr = new int[5];

    cout << arrPtr[0] << "     " << arrPtr[1] << endl;

    delete [] arrPtr;

    arrPtr = new int[5]();  // zer0-initialization
    cout << arrPtr[0] << "     " << arrPtr[1] << endl;



    return 0;
}
