#include <iostream>
using namespace std;

void towerofHanoi(int n, char A, char B, char C){
    if(n == 1){
        cout << "move disk 1 from "<< A << " to " << C << endl;
        return;
    }

    towerofHanoi(n-1, A,C,B);
    cout << "move disk " << n << " from " << A << " to " << C << endl;
    towerofHanoi(n-1, B,A,C);
    return ;
}

int main() {

    towerofHanoi(3,'A', 'B','C');
    return 0;
}
