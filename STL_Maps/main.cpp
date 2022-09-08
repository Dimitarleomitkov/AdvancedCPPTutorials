/*
Map
    size()
    =
    [], at()
    clear()
    count(), find()
    empty()
    insert(p), insert(it1, it2), insert(init_list)
    erase(it), erase(it1, it2), erase(key)
    begin(), end()
    upper_bound(key), lower_bound(key)
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> M = {{10, "cat"}, {20, "dog"}, {5, "bat"}};
    
    for(auto& p: M) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
    cout << "size = " << M.size() << endl;
    M.insert({100, "rabbit"});
    M.insert({10, "fish"});
    for(auto& p: M) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
    
//    auto it = M.erase(M.find(10));
//    cout << "erase return = " << it->first << endl;

    int num_erased = M.erase(10);
    cout << "num_erased = " << num_erased << endl;

    auto ub = M.upper_bound(15);
    auto lb = M.lower_bound(15);
    
    cout << "up = " << ub->first << endl;
    cout << "lp = " << lb->first << endl;
    
    M.insert({{-10, "apple"}, {-30, "orange"}, {-20, "mango"}});
    for(auto& p: M) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    map<int, string> M2 = {{10, "aa"}, {20, "bb"}, {15, "cc"}, {5, "dd"}};
    
    M.insert(M2.begin(), M2.end());
    for(auto& p: M) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    return 0;
}
