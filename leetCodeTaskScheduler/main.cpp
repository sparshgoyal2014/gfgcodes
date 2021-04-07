#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int leastInterval(vector<char>& tasks, int n) {

        unordered_map<char, int> map;  // char ---> frequency

        for(int i=0; i<tasks.size(); i++){
            map[tasks[i]]++;
        }


        int maxFreq = 0;
        int identicalFreq = 0;
        for(auto i: map){
            maxFreq = max(maxFreq, i.second);
        }

        for(auto i: map){
            if(i.second == maxFreq){
                identicalFreq++;
            }
        }





        int result = max(tasks.size(), (unsigned int)((maxFreq-1)*(n+1) + identicalFreq));

        return result;



    }

int main() {
    std::cout << "Hello, World!" << std::endl;

    unsigned  int x = 3;
    int y = 2;


    cout << max(x,(unsigned long int)y) << endl;

    return 0;
}
