#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

class Animal{
    string name;

    Animal(string name){
        this->name = name;
    }
};


struct TreeFall{
    pair<lli, lli> left;
    pair<lli, lli> right;

    TreeFall(lli pi, lli hi){
        left = make_pair(pi-hi, pi);
        right = make_pair(pi, pi+hi);
    }
};

bool compare(pair<lli, lli> p1, pair<lli, lli> p2){
    return p1.first < p2.first;
}

int main() {

    int t;
    cin >> t;

    while(t--){
        int N;
        cin >> N;

        pair<lli, lli> arr[N];

        for(int i=0; i<N; i++){
            lli pi, hi;

            cin >> pi >> hi;

            arr[i] = make_pair(pi, hi);
        }

        sort(arr, arr+N, compare);


        vector<TreeFall> intervals = vector<TreeFall>(N);

        for(int i=0; i<N; i++){
            intervals.push_back(TreeFall(arr[i].first, arr[i].second));
        }













    }

    return 0;
}
