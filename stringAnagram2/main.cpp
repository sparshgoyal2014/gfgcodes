#include <iostream>
using namespace std;

bool checkStringAnagram(string str1, string str2){

    if(str1.length() != str2.length()){
        return false;
    }
    int count[256] = {0};

    for(int i=0; i<str1.length(); i++){
        count[str1[i]]++;
    }

    for(int i=0; i<str2.length(); i++){
        count[str2[i]]--;
    }

    for(int i=0; i<256; i++){
        if(count[i] != 0){
            return false;
        }
    }

    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
