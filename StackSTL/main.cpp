#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    s.push(5);
    s.push(10);

    cout << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
//    cout << s.top() << endl;
    cout << s.size() << endl;

    return 0;
}
