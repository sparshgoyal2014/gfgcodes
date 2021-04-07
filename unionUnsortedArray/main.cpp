#include <iostream>
#include <unordered_set>

using namespace std;

int countUnion(int arr1[], int arr2[], int m, int n){
    unordered_set<int> set;

    for(int i=0; i<m; i++){
        set.insert(arr1[i]);
    }

    for(int i=0; i<n; i++){
        set.insert(arr2[i]);
    }

    return set.size();


}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
