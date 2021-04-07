#include <iostream>
#include <unordered_map>

using namespace std;


//naive
int longestCommonSpan(int arr1[], int arr2[], int size){
    int result = 0;

    for(int i=0; i<size; i++){
        int sum1 = 0, sum2 = 0;

        for(int j=i; j<size; j++){
            sum1  += arr1[j];
            sum2  += arr2[j];

            if(sum1 == sum2){
                result = max(result, j-i+1);
            }
        }
    }

    return result;
}

// using hashing
int longestCommonSpanHashing(int arr1[], int arr2[], int size){
    int temp[size];

    for(int i=0; i<size; i++){
        temp[i] = arr1[i] - arr2[i];
    }

    unordered_map<int, int> map;

    int prefixSum = 0, result = 0;

    for(int i=0; i<size; i++){
        prefixSum += temp[i];
        if(prefixSum == 0){
            result = i+1;
        }

        if(map.find(prefixSum) == map.end()){
            map.insert({prefixSum, i});
        }

        if(map.find(prefixSum) != map.end()){
            result = max(result, i-map[prefixSum]);
        }
    }

    return result;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
