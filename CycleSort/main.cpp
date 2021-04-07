#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void cyclesortdistinct(int arr[], int size){
    for(int cycleStart = 0; cycleStart < size-1; cycleStart++){
        int position = cycleStart;
        int item = arr[cycleStart];

        for(int i = cycleStart+1; i<size; i++){
            if(arr[i] < item){
                position++;
            }
        }

        swap(item, arr[position]);

        while(position !=cycleStart){
            int position = cycleStart;

            for(int i = cycleStart+1; i<size; i++){
                if(arr[i] < item){
                    position++;
                }
            }

            swap(item, arr[position]);
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
