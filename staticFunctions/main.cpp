#include <iostream>
using namespace std;

void static display(int num){ // or static void display(int num)
    if(num == 0){
        return;
    }
    cout << num  << " ";
    display(num-1);
}

int main() {

    display(5);

    return 0;
}
