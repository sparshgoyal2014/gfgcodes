#include <iostream>
#include <queue>
using namespace std;

struct Person{
    int height;
    int age;

    Person(int age, int height){
        this->age = age;
        this->height = height;
    }

};


struct MyComparator{

    bool operator()(Person p1, Person p2){
        return true;
    }

};




int main() {

    priority_queue<Person, vector<Person>, MyComparator> pq;

    pq.push(Person(50,5));
    pq.push(Person(14,10));
    pq.push(Person(23,7));
    pq.push(Person(20,6));
    pq.push(Person(19,8));


    while(pq.empty() == false){
        cout << pq.top().height << " ";
        pq.pop();
    }cout << endl;



    return 0;
}
