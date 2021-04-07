#include <iostream>
#include <set>

using namespace std;

void ceilToLeft(int arr[], int size){
    cout << -1 << " ";

    set<int> set;

    for(int i=1; i<size; i++){
        set.insert(arr[i-1]);

        auto itr = set.upper_bound(arr[i]);

        if(itr != set.end()){
            cout << *itr << " ";
        }else{
            cout << -1 << " ";
        }
    }

    cout << endl;
}

int main() {

    int arr[7] = {2,8,30,15,25,12,12};

    ceilToLeft(arr, 7);

    set<int> set;

    set.insert(10);
    set.insert(15);
    set.insert(20);

    cout << *set.upper_bound(10) ;
    cout << *set.upper_bound(5);

    return 0;
}
