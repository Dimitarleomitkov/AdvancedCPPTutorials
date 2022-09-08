/*
Multimap
    size()
    =
    clear()
    count(), find()
    empty()
    insert(key), insert(it1, it2), insert(init_list)
    erase(it), erase(it1, it2), erase(key)
    upper_bound(key), lower_bound(key)
    equal_range(key)
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> M = {{10, "cat"}, {20, "dog"}, {5, "bat"}};
    cout << "size = " << M.size() << endl;
    for (auto& p: M) {
        cout << "{" << p.first << ", " << p.second << "} "; 
    }
    cout << endl;
    
    M.insert({100, "rabbit"});
    M.insert({10, "fish"});
    M.insert({{10, "cat"}, {12, "bat"}});
    M.insert(make_pair<int, string>(12, "bat_2"));
    
    for (auto& p: M) {
        cout << "{" << p.first << ", " << p.second << "} "; 
    }
    cout << endl;
    
    map<int, string> M2 = {{10, "aa"}, {20, "bb"}, {15, "cc"}, {5, "dd"}};
    M.insert(M2.begin(), M2.end());
    for (auto& p: M) {
        cout << "{" << p.first << ", " << p.second << "} "; 
    }
    cout << endl;
    
//    cout << "size = " << M.size() << endl;
//    auto it = M.erase(M.find(10));
//    cout << it->first << endl;
//    cout << "size = " << M.size() << endl;

//    cout << "size = " << M.size() << endl;
//    auto it = M.erase(10);
//    cout << "size = " << M.size() << endl;

    auto ub = M.upper_bound(15);
    auto lb = M.lower_bound(15);

    cout << "ub = " << ub->first << endl;
    cout << "lb = " << lb->first << endl;
    
    auto range = M.equal_range(10);
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << "\t";
    }
    cout << endl;

    return 0;
}
