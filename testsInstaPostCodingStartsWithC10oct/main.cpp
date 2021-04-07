#include <iostream>
#include <stack>
using namespace std;

int display(){
    cout << "this is display function " << endl;
    return 21;
}

int main() {

//    char str[20] = "CodingQuiz";
//    cout << sizeof(str) << endl;

//
//    stack<int> s;
//
//    s.push(1);
//    s.push(1);
//    s.push(1);
//    s.push(1);
//    cout << s.top() << endl;
//    cout << s.size() << endl;
//    s.top() = 2;
//
//    cout << s.top() << endl;
//    cout << s.size() << endl;


    cout << display << endl;

    cout << (*display)() << endl;


    return 0;
}
