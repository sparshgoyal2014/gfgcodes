#include<bits/stdc++.h>
#include<string>

using namespace std;

const char arr[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};


void possibleWordsGenerate(int a[], int currentIndex, char result[], int size){
    int i;
    if(currentIndex == size){
        cout << result << endl;
        return;
    }

    for(i=0; i < strlen(arr[a[currentIndex]]); i++){
        result[currentIndex] = arr[a[currentIndex]][i];
        possibleWordsGenerate(a,currentIndex+1, result, size);

        if(a[currentIndex] == 0 || a[currentIndex] == 1){
            return ;
        }
    }
}

void possibleWords(int a[],int N)
{
    //Your code here
    char result[N+1];
    result[N] = '\0';
    possibleWordsGenerate(a, 0, result, N);

}


int main(){
    int a[3] = {2,3,4};
    possibleWords(a, 3);
    cout << endl;
}