#include <iostream>
using namespace std;

bool getBoolean(){
    return true;
}


int main() {

    if(sizeof 3 < (unsigned int)-1){
        cout << " yes" << endl;
    }else{
        cout << "No" << endl;
    }

    if((unsigned int)4 > -1){

    }


    cout << (unsigned int)-1 << endl;

    if(getBoolean()){
        cout << "in if" << endl;
    }else{
        cout << "in else" << endl;
    }


    return 0;
}
