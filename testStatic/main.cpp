#include <iostream>
using namespace std;

class Animal{
public:
    int y = 2;
    static int x;

    void display(){
        cout << y << endl;
        x = y;
        x = 3;

        cout << x << endl;
    }

};
int Animal:: x;

void display(){

//    int y = 2;
//    static int x = y;
//
//    if(x == y){
//        cout << "equal" << endl;
//    }else if(x < y){
//        cout << "x is less" << endl;
//    }else{
//        cout << " x is greater" << endl;
//    }

    Animal animal;
    animal.display();


}


int main() {

    display();

    return 0;
}
