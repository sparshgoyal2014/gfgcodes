#include <iostream>

using namespace std;

bool checkRotation(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }

    str1 = str1 + str1;  // concatenate string with itself;

    if(str1.find(str2) != string:: npos){
        return true;
    }

    return false;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
