#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int factorial(int number){
    if(number == 0){
        return 1
    }

    return number * factorial(number-1);
}

int lexiographicRank(string str){
    int count[256] = {0};
    int mul = factorial(str.length());
    int result = 1;

    for(int i=0; i<str.length(); i++){
        count[str[i]]++;
    }

    for(int i=1; i<256; i++){
        count[i] = count[i] + count[i-1];
    }

    for(int i=0; i<str.length(); i++){
        mul = mul/(str.length() - i);

        result = result + (count[str[i] - 1])*mul;

        for(int j = str[i]; j<256; j++){
            count[j]--;
        }
    }

    return result;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
