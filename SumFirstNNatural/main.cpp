#include <iostream>
using namespace std;

int sumNatural(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }

    return sum;
}

int sumNatural2(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            sum++;
        }
    }

    return sum;
}

int main() {
    cout << sumNatural(5) << endl;
    cout << sumNatural2(5) << endl;
    return 0;
}
