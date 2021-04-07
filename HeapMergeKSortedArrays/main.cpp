#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Triplet{

public:

    int value;
    int positionOfArray;
    int positionOfValue;

    Triplet(int value, int positionOfArray, int positionOfValue){
        this->value = value;
        this->positionOfArray = positionOfArray;
        this->positionOfValue = positionOfValue;
    }


};


class compare{
public:  // it has to be made public, otherwise it will give compile time error as pq internally calls operator() during compilation
    bool operator()( Triplet const& t1, const Triplet& t2 ){
        return t1.value > t2.value;
    }
};


vector<int> mergeKSortedArrays(vector<vector<int>> &vec){
    vector<int> result;  // empty vector

    priority_queue<Triplet, vector<Triplet>, compare> pq;

    for(int i=0; i<vec.size(); i++){
        Triplet triplet = Triplet(vec[i][0], i, 0);
        pq.push(triplet);
    }


    while(pq.empty() == false){
        result.push_back(pq.top().value);
        Triplet current = pq.top();
        pq.pop();

        if(current.positionOfValue + 1 < vec[current.positionOfArray].size()){
            Triplet triplet = Triplet(vec[current.positionOfArray][current.positionOfValue+1], current.positionOfArray, current.positionOfValue+1);
            pq.push(triplet);
        }
    }

    return result;


}

//struct Rectangle{
//    int value;
//};
//
//class MyCompare{
//    bool operator()(Rectangle r1, Rectangle r2){
//        return r1.value > r2.value;
//    }
//};

class Animal{
    Animal* animal = new Animal();
};

int main() {

//    priority_queue<Rectangle, vector<Rectangle>, MyCompare> pq;
//
//    pq.push({1});
//    pq.push({2});
//    pq.push({3});

    priority_queue<int> pq;

    pq.p



    return 0;
}
