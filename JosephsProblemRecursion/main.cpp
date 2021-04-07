#include <iostream>
using namespace std;

int killPeople(int numberOfPeople, int k, int positionOfPistol){
    if(numberOfPeople == 1)return positionOfPistol;

    int pos = positionOfPistol + k;
    if(pos > numberOfPeople){
        while(pos>numberOfPeople){
            pos = pos - numberOfPeople;
        }
    }

    return killPeople(numberOfPeople-1, k, pos)-1;
}

int killPeople2(int n, int k){
    if(n==1)return 0;

    return (killPeople2(n-1,k)+k)%n;
}

int main() {
//    cout << killPeople(7,3,0);

    cout << killPeople2(7,3);
    return 0;
}
