#include <bits/stdc++.h>
using namespace std;

vector<long long> reverseInGroups(vector<long long> v, int n, int k){

    // your code here
    int start = 0;
    int end;
    if(n < k){
        end = n-1;
    }else{
        end = k-1;
    }

    while(end <= (n-1)){
        reverse(v.begin() + start, v.begin() + end);
        start = end+1;
        if(end+k <= (n-1)){
            end = end+k;
        }else{
            end = n-1;
        }

    }

    return v;

}


int main() {

    int t; //Testcases
    cout << "type no. of test cases you want to run:" << endl;
    cin >> t; //input the number of testcases

    while(t--){ //while testcases exist

        int n;
        cout << "Enter size of an Array :" << endl;
        cin >> n; //input the size of array

        vector<long long> mv; // Declaring a vector mv

        int k;
        cin >> k; //input k

        cout << "enter elements :" << endl;
        for(long long i =0;i<n;i++){
            long long x;
            cin >> x; //input element of array

            mv.push_back(x); //push the element into vector
        }

        mv = reverseInGroups(mv, n, k);

        for(long long i =0;i<n;i++){
            cout << mv[i] << " "; //Just print the vector
        }

        cout << endl;



    }

}