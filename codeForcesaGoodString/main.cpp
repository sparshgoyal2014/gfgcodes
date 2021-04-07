#include <bits/stdc++.h>
using namespace std;


int minMovesTogoodUtil(string str, int size, int l, int r, char currentGoodCharacter){

    if(l > r){
        return 0;
    }

    if(l == r){
        if(str[l] == currentGoodCharacter){
            return 0;
        }else{
            return 1;
        }
    }


    int tempFirsthalf = 0;
    int tempSecondHalf = 0;
    for(int i=l; i<= l + (r-l)/2; i++){
        if(str[i] != currentGoodCharacter){
            tempFirsthalf++;
        }
    }


    for(int i= l + (r-l)/2+1; i<=r; i++){
        if(str[i] != currentGoodCharacter){
            tempSecondHalf++;
        }
    }

    return min(tempFirsthalf +  minMovesTogoodUtil(str, size, l + (r-l)/2+1, r, currentGoodCharacter+1)  , tempSecondHalf +  minMovesTogoodUtil(str, size, l, l + (r-l)/2, currentGoodCharacter+1) );


}

int minMovesToMakeAString(string str, int size){

    int result = 0;

    return minMovesTogoodUtil(str, size, 0, size-1, 'a');

}


int main(){
    int t;
    cin >> t;

    while(t--){
        int size;
        cin >> size;   // must be some poewr of 2

        string str;
        cin >> str;
        cout << str << endl;

        cout << minMovesToMakeAString(str, size) << endl;
    }




    return 0;
}