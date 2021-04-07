#include <iostream>
#include <unordered_map>

using namespace std;


int main() {

    unordered_map<string, int> map;

    map["gfg"] = 20;
    map["ide"] = 25;
    map["courses"] = 30;

    if(map.find("ide") != map.end()){
        cout << "Found: " << endl;
        cout << map.find("ide")->first << " " << map.find("ide")->second << endl;
    }else{
        cout << "Not Found : " << endl;
    }

    for(auto itr = map.begin(); itr != map.end(); itr++){
        cout << itr->first << " " << itr->second << endl;
    }

    if(map.count("gfg") > 0){
        cout << "Found : "<< endl;
    }else{
        cout << "Not Found: " << endl;
    }

    cout << map.size() << endl;

    map.erase("courses");
    map.erase(map.begin());

    cout << map.size() << endl;

    return 0;
}
