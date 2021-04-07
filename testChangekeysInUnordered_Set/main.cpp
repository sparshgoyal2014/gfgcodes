#include <iostream>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

class User;


class User{   // mutable object

public:

    string name;
    int age;

    User(string name, int age){
        this->name = name;
        this->age = age;
    }

    bool operator==( User user)const {
        return name == user.name;
    }
};

namespace std {
    template<>
    struct hash<User>
    {
        size_t operator()(const User& user) const
        {
            return hash<string>{}(user.name);
        }
    };
}




int main() {

    unordered_set<int> set;

    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);


    for(auto itr = set.begin(); itr != set.end(); itr++){
        cout << *itr << endl;

    }

    auto itr = set.begin();



    unordered_set<User> set2;

    set2.insert(User("Tim", 30));
    set2.insert(User("John", 23));
    set2.insert(User("Bob", 35));
    set2.insert(User("Russo", 27));
    set2.insert(User("Spartsh", 20));


    for(auto itr = set2.begin(); itr != set2.end(); itr++){
        cout << itr->name << " ";
    }cout << endl;


    auto itr2 = set2.begin();

    itr2->name = "changed";  // can't modify key









    return 0;
}
