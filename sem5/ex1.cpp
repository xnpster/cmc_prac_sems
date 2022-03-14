#include <map>
#include <string>
#include <iostream>
/*
map             pair(key, value)
multimap        

*/

using namespace std;

int main() {
    std::map<std::string, int> mp { 
        {"Joe", 10},
        {"Alex", 20},
        {"Fred", 30}
    };


    mp.insert(std::pair<std::string, int>("Alice", 2));
    mp.insert(std::make_pair("Bob", 40));
    mp.emplace("Eve", 30);


    std::map<std::string, int>::iterator map_it = mp.find("Eve");

    for(auto pair : mp) {
        std::cout << pair.first << " val: " << pair.second << std::endl;
    }

    if(map_it == mp.end()) {
        std::cout << "no" << std::endl;
    } else {
        std::cout << map_it->first << " : " << map_it->second << std::endl; 
    }

    for(auto pair : mp) {
        std::cout << pair.first << " val: " << pair.second << std::endl;
    }

    //mp.erase(it1, it2) -- erase [it1, it2)
    //size_t mp.erase(key_t key) -- erase all key and return its count (works with both map and multimap)

    multimap<int, int> mmp = {
        {33, 5},
        {5, 2},
        {33, 1},
        {33, 10},
        {21, 4},
        {50, 50}
    };

    
    typedef multimap<int, int>::iterator mmp_it;
    pair<mmp_it, mmp_it> range = mmp.equal_range(33);

    for(auto p = range.first; p != range.second; p++) {
        cout << p->second << endl;
    }

    // lower_bound and upper_bound
    /*
    ...
    5 2
    -------
    33 1    <-- lower_bound
    33 10
    33 5
    -------
    50 50   <-- upper_bound
    ...
    */
}