#include <iostream>
#include <stack>

using namespace std;


bool isBalances(string str){
    stack<int> stk;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            stk.push(str[i]);
        }else{

            if(stk.empty()){
                return false;
            }else if(stk.top() != str[i]){
                return false;
            }else{
                stk.pop();
            }
        }
    }

    return stk.empty();
}


int main() {

    return 0;
}
