#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {

    int arr[10] = {0}; //creating an array of n size and its values are all 0
    for(int i=1;i<10;i++){
        for(int j=i;j<10;j+=i){
            arr[j]++;
        }
    }

    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}//15