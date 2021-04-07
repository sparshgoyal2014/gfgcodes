#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Given an array of limits. For every limit, find the prime number which can be written as the sum of the most consecutive primes smaller than or equal to limit.
//The maximum possible value of a limit is 10^4.

int getPrimeNumbers(int primes[], int maxLimit){  // return the last size of the primes array
    int n = (maxLimit - 1)/2;

    bool mark[n+1];
    memset(mark, false, sizeof(mark));

    for(int i=1; i<=n; i++){
        for(int j=i; i + j + 2*i*j <= n; j++){
            mark[i + j + 2*i*j] = true;
        }
    }
    int index = 0;

    for(int i=1; i<=n; i++){
        if(mark[i] == false){
            primes[index] = 2 * i + 1;
            index++;
        }
    }


    return index;  // index - 1 is the last index, observe carefully  ,, sor index is the size of the primes array


}

int printMaxLengthConsecutivePrimes(int limit, int primePrefixSum[], int primeSize, int primes[]){
    int maxLength = 0;
    int result = 0;

    for(int i=0; primes[i] <= limit; i++){
        for(int j=0; j<=i; j++){
            if(primePrefixSum[i] - primePrefixSum[j] > limit){
                break;
            }

            int tempSum = primePrefixSum[i] - primePrefixSum[j];

            if(binary_search(primes, primes + primeSize, tempSum)){
                if(maxLength > i-j + 1){
                    maxLength = i-j+1;
                    result = tempSum;
                }
            }

        }
    }


    return result;

}

void mostConsecutivePrimes(int limits[], int size){
    int primes[10000];

    int primeSize = getPrimeNumbers(primes, 10000);

    int primePrefixSum[primeSize];
    memset(primePrefixSum, 0, sizeof(primePrefixSum));

    primePrefixSum[0] = primes[0];

    for(int i=1; i<primeSize; i++){
        primePrefixSum[i] = primePrefixSum[i-1] + primes[i];
    }


    for(int i=0; i<size; i++){
        cout << printMaxLengthConsecutivePrimes(limits[i], primePrefixSum, primeSize, primes);
    }

}



int main() {

    return 0;
}
