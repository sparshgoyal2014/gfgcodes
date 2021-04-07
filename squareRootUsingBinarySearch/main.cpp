#include <iostream>
using namespace std;

int squareRoot(int x){
    if(x == 0 || x == 1)return x;
    int start = 1, end = x;
    int ans = 0;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(mid * mid == x){
            return mid;
        }

        if(mid * mid < x){
            ans = mid;
            start = mid+1;
        }else{
            end = mid -1;
        }

    }

    return ans;
}


int main() {
    cout << squareRoot(12) << endl;
    return 0;
}
