#include <iostream>
using namespace std;

void display(){
    int temp = 0;

    for(int i=0; i<5; i++){
        static int x;
        x = 0;

        x++;

        temp = x;
    }

    cout << temp << endl;
}

void test(){
    int temp[5];
    for(int i=0; i<5; i++){
        int arr[5] = {0};

        arr[i] = i;

        for(int i=0; i<5; i++){
            temp[i] = arr[i];
        }
    }

    for(int i=0; i<5; i++){
        cout << temp[i] << " ";
    }
    cout <<  endl;
}

int main() {

    display();
    cout << "************" << endl;
    test();

    int x = 4;
    const int &y = x;

    int const  &z = y;

    const int& t = y;

     int*  ptr = &x;

    return 0;
}
