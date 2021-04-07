#include <iostream>
#include <queue>
#include <map>

using namespace std;



int maximumItems(int arr[], int size, int sum) {

    int result = 0;

    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + size);

    while (sum >= pq.top()) {
        result++;
        sum = sum - pq.top();
        pq.pop();
    }


    return result;
}


int main() {
//    std::cout << "Hello, World!" << std::endl;
//    vector< int const &> vec2 = {1,2,3};
//
//    vector<int const > vec = {1,2,3};

    map<int, int &> map;

    int x= 4;
    map.insert({1,x});


//    cout << map[1] << endl;

    return 0;
}
