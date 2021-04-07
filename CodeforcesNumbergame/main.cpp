

#include<iostream>
using namespace std;

const int N = 50000;

bool check_prime(int n){
    for(int i = 2; i < min(N, n); i++)
        if(n % i == 0)
            return false;
    return true;
}

bool checkPrime(int number){
    for(int i=2; i<number/2; i++){
        if(number % i == 0){
            return false;
        }
    }

    return true;
}

void whoWins(int n){

    string p1 = "Ashishgup";
    string p2 = "FastestFinger";


    bool p1Loss = false;

    if(n==1){
        p1Loss = true;
    }

    if(n > 2 && n%2 == 0){
        if((n & (n-1)) == 0){
            p1Loss = true;
        }else if(n % 4 != 0 && checkPrime(n / 2)){
            p1Loss = true;
        }
    }

    if(p1Loss){
        cout << p2 << " ";
    }else{
        cout << p1 << " ";
    }

}
//
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
//        bool lose = (n == 1);
//        if(n > 2 && n % 2 == 0){
//            if((n & (n-1)) == 0)
//            lose = 1;
//            else if(n % 4 != 0 && check_prime(n / 2))
//                lose = 1;
//        }
//        if(lose)
//            cout << "FastestFinger" << endl;
//        else cout << "Ashishgup" << endl;
        whoWins(n);
    }

    return 0;
}

//#include <iostream>
//using namespace std;
//
//typedef long long lli;
//
//bool checkPrime(lli number){
//    for(lli i=2; i<number/2; i++){
//        if(number % i == 0){
//            return false;
//        }
//    }
//
//    return true;
//}
//
//
//
//
//void whoWins(lli n){
//
//    string p1 = "Ashishgup";
//    string p2 = "FastestFinger";
//
//
//    bool p1Loss = false;
//
//    if(n==1){
//        p1Loss = true;
//    }
//
//    if(n > 2 && n%2 == 0){
//        if((n & (n-1)) == 0){
//            p1Loss = true;
//        }else if(n % 4 != 0 && checkPrime(n / 2)){
//            p1Loss = true;
//        }
//    }
//
//    if(p1Loss){
//        cout << p2 << " ";
//    }else{
//        cout << p1 << " ";
//    }
//
//}
//
//
//int main() {
//
//    int t;
//    cin >>  t;
//
//    while(t--){
//        lli n;
//        cin >> n;
//
//        whoWins(n);
//        cout << endl;
//    }
//
//    return 0;
//}