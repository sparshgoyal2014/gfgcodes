#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define SIZE 50

void fillMatrix(char in[], char out[], int N){
    char arr[SIZE][SIZE];

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            arr[i][j] = 'N';
        }
    }

    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            if(i == j){
                arr[i][j] = 'Y';
                continue;
            }

            if(in[j] == 'N'){
                break;
            }

            if(out[i] == 'N'){
                break;
            }

            if(arr[i][j-1] == 'Y' && out[j-1] == 'Y'){
                arr[i][j] = 'Y';
            }

        }
    }

    for(int i=0; i<N; i++){
        for(int j=i; j>=0; j--){
            if(i == j){
                continue;
            }

            if(in[j] == 'N'){
                break;
            }

            if(out[i] == 'N'){
                break;
            }

            if(arr[i][j+1] == 'Y' && out[j+1] == 'Y'){
                arr[i][j] = 'Y';
            }

        }
    }


    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << arr[i][j];
        }cout << endl;
    }




}

int main() {
    int t;
    cin >>t;
    int caseNo = 1;

    while(t--){
        int N;
        cin >> N;

        char in[N];
        for(int i=0; i<N; i++){
            cin >> in[i];
        }

        char out[N];
        for(int i=0; i<N; i++){
            cin >> out[i];
        }

        cout << "Case #" << caseNo << ":" << endl;
        fillMatrix(in, out, N);
        caseNo++;
        
    }

    return 0;
}
