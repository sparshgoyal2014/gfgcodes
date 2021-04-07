#include <iostream>
#include <unordered_map>
using namespace std;


// naive approach
int longestSubArrayGivenSum(int arr[], int size, int sum){
    int res = 0;

    for(int i=0; i<size; i++){
        int currentSum = 0;

        for(int j=i; j<size; j++){
            currentSum += arr[i];

            if(currentSum == sum){
                res = max(res, j-i+1);
            }
        }
    }

    return res;
}

// hashing approach
int largestSubArraySumHashing(const int arr[], int size, int sum){
    unordered_map<int, int> map;

    int prefixSum = 0;
    int result = 0;
    for(int i=0; i<size; i++){
        prefixSum += arr[i];

        if(prefixSum == sum){
            result = i+1;
        }

        if(map.find(prefixSum) == map.end()){
            map.insert({prefixSum, i});
        }

        if(map.find(prefixSum - sum) != map.end()){
            result = max(result, i-map[prefixSum-sum]);
        }
    }

    return result;

}


int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;

    int arr[5] = {a,b,c,d,e};  // yep! variables are allowed in initializer list.... :)

    for(int i: arr){
        cout << i << endl;
    }

    char* str;

    str[0] = 'a';




    return 0;
}
