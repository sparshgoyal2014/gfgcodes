#include <iostream>
using namespace std;

void unionArray(int a[], int aSize, int b[], int bSize){
    int i = 0; int j = 0;

    while(i < aSize && j < bSize){
        if(i > 0 && a[i-1] == a[i]){
            i++;
            continue;
        }

        if(j > 0 && b[j-1] == b[j]){
            j++;
            continue;
        }

        if(a[i] < b[j]){
            cout << a[i] << " ";
            i++;
        }else if(a[i] > b[j]){
            cout << b[j] << " ";
            j++;
        }else{
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

    while(i<aSize){
        cout << a[i] << " ";
        i++;
    }

    while(j<bSize){
        cout << b[j] << " ";
        j++;
    }


}


int main() {
    int a[] = {3,8,10};
    int b[] = {2,8,9,10,15};

    unionArray(a, 3, b, 5);

    return 0;
}
