#include <iostream>
using namespace std;

void intersection(int a[], int aSize, int b[], int bSize){
    int i=0; int j=0;

    while(i < aSize && j<bSize){
        if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }else if(a[i] == b[j] && a[i] != a[i-1] && b[j] != b[j-1]){
            cout << a[i] << " ";
            i++;
            j++;
        }else{
            i++;
            j++;
        }
    }
}

int main() {
    int a[] = {1,1,2,5,8,13,15};
    int b[] = {1,1,1,1,3,8,15,18,20,25};

    intersection(a, 7, b, 10);
    return 0;
}
