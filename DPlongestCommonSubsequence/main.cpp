#include <iostream>
using namespace std;


// subsequence  ----  characters should be taken in the order but may not be contiguous.

int longestCommonSubsequence(string str1, string str2, int m, int n){

    if(m == 0 || n == 0){
        return 0;
    }

    if(str1[m-1] == str2[n-1]){
        return 1 + longestCommonSubsequence(str1, str2, m-1, n-1);
    }else{
        return max(longestCommonSubsequence(str1, str2, m-1,n), longestCommonSubsequence(str1, str2, m, n-1));
    }


}

int memo[100][100];
int lcsMemoization(string str1, string str2, int m, int n){

    if(memo[m][n] != -1){
        return memo[m][n];
    }


    int result;
    if(m == 0 || n == 0){
        result = 0;
    }else if(str1[m-1] == str2[n-1]){
        result = 1 + lcsMemoization(str1, str2, m-1, n-1);  // if-else conditions may be wrong!!
    }else{
        result = max(lcsMemoization(str1, str2, m-1, n), lcsMemoization(str1, str2, m, n-1));
    }



    memo[m][n] = result;


    return memo[m][n];
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
