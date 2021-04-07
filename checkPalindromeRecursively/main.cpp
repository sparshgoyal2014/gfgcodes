#include <iostream>
using namespace std;

bool isPalinddrome(string str, int s, int e){
    if(str[s] == str[e]){
        if(s == e)return true;
        if(s>e)return true;
        isPalinddrome(str, s+1, e-1);
    }else{
        return false;
    }
    return true;

}

int main() {
    bool result = isPalinddrome("aabafa", 0, 4);
    cout << result << endl;
    return 0;
}
