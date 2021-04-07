#include <iostream>
using namespace std;

int& test(){
    int a = 5;

    return a;
}


int& test2(){
    int a = 5;

    return a;
}



int main() {
    int a = 5;

//    int &b = a;
//    int& c = 3;
//    int& refVariale = &a;
//
//    const int variable = 4;
//    int& ref1 = variable;

//    5 = a;  // lvalue required as left value of assignment

//
//    const int& number = 5;
//    cout << number << endl;

    cout << test2() << endl;

//    int& 5 = a;  // expected unqualified id(identifier)

//    int number = 4;
//    int *ptr = 5;   // cannot initialize a variable of type int* with rvalue of type int
//    int *ptr = number;   // cannot initialize a variable of type int* with lvalue of type int

    float testNumber = 5;
     int & refVar1 = testNumber;


    return 0;
}
