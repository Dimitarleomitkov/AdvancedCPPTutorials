/*
Vectors
    size(), capacity(), max_size()
    =, [], at()
    front(), back()
    shrink_to_fit()
    empty()
    begin(), end(), rbegin(), rend()
    insert(), erase()
    push_back(), pop_back()
*/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3};

    cout << "size = " << v.size() << ", capacity = " << v.capacity() << ", max_size = " << v.max_size() << endl;

    v.push_back(5);
    cout << "size = " << v.size() << ", capacity = " << v.capacity() << ", max_size = " << v.max_size() << endl;

    int cap = v.capacity();
    for (int i = 0; i < 100; ++i) {
        v.push_back(i);
        if (cap != v.capacity()) {
            cap = v.capacity();
            cout << "capacity = " << v.capacity() << endl;
        }
    }

    cout << v[104] << endl;
    // at() has boundary checks therefore it would throw an error if it is ran.
//    cout << v.at(104) << endl;

    cout << "front = " << v.front() << ", back = " << v.back() << endl;

    v.insert(v.begin() + 2, -333);
    cout << v[2] << endl;
    cout << "size = " << v.size() << ", capacity = " << v.capacity() << ", max_size = " << v.max_size() << endl;
    v.pop_back();
    cout << "size = " << v.size() << ", capacity = " << v.capacity() << ", max_size = " << v.max_size() << endl;

    list<int> ll = {-100, -200, -300};
    v.insert(v.begin(), ll.begin(), ll.end());
    cout << v[0] << ", " << v[1] << ", " << v[2] << endl;
    cout << "size = " << v.size() << ", capacity = " << v.capacity() << ", max_size = " << v.max_size() << endl;

    v.pop_back();
    v.erase(v.begin() + 1);
    cout << v[0] << ", " << v[1] << ", " << v[2] << endl;
    cout << "size = " << v.size() << ", capacity = " << v.capacity() << ", max_size = " << v.max_size() << endl;

    // Erase a range
    v.erase(v.begin() + 1, v.begin() + 3);
    cout << v[0] << ", " << v[1] << ", " << v[2] << endl;
    cout << "size = " << v.size() << ", capacity = " << v.capacity() << ", max_size = " << v.max_size() << endl;

    if (!v.empty()) {
        v.shrink_to_fit();
        cout << "size = " << v.size() << ", capacity = " << v.capacity() << ", max_size = " << v.max_size() << endl;
    }

    v.clear();
    if (v.empty()) {
        cout << "The vector is cleared." << endl;
    }

    return 0;
}
