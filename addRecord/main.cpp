#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int temperatures[60];
void addRecord(int temp){

    static int size = 0;
    if(size < 60){
        temperatures[size] = temp;
    }else{
        temperatures[size % 60] = temp;
    }
    size++;

}

int main() {

    int temperatures[60];

    memset(temperatures, 0, sizeof(temperatures));

    int time = 0;

    while(true){
        if(time % 60 == 0){
            int temp;
            addRecord(temp);
        }else{
            time++;
        }
    }



    return 0;
}
