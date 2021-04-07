#include <iostream>
#include <unordered_set>

using namespace std;

int countIntersectionn(int arr1[], int arr2[], int m, int n){
    unordered_set<int> set;
    for(int i=0; i<m; i++){
        set.insert(arr1[i]);
    }

    int result = 0;

    for(int i=0; i<n; i++){
        if(set.find(arr2[i]) != set.end()){
            result++;
            set.erase(arr2[i]);
        }
    }

    return result;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
