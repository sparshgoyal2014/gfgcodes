#include <iostream>
using namespace std;

typedef long long int lli;

bool isPossibleToSell(int arr[], lli size){
    lli count5 = 0;
    lli count10 = 0;
    lli count15 = 0;

    for(lli i=0; i<size; i++){
        if(arr[i] == 5){
            count5++;
        }

        if(arr[i] == 10){
            if(count5 > 0){
                count5--;
                count10++;
            }else{
                return false;
            }
        }

        if(arr[i] == 15){
            if(count10 > 0){
                count15++;
                count10--;
            }else if(count5 > 1){
                count5 -= 2;
                count15++;
            }else{
                return false;
            }
        }
    }

    return true;

}

int main() {
    // your code goes here
    int t;
    cin >> t;

    while(t--){
        lli size;
        cin >> size;

        int arr[size];

        for(lli i=0; i<size; i++){
            cin >> arr[i];
        }

        if(isPossibleToSell(arr, size)){
            cout << "YES";
        }else{
            cout << "NO";
        }

        cout << endl;


    }
    return 0;
}
