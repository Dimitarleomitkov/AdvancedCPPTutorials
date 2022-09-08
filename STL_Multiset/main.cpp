/*
Multiset
    size()
    =
    clear()
    count(), find()
    empty()
    insert(key), insert(it1, it2), insert(init_list)
    erase(it), erase(it1, it2), erase(key)
    upper_bound(key), lower_bound()
    contains(key) C++20
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Student {
public:
    int id;
    string name;

    void Print_student() const {
        cout << "[name = " << name << ", id = " << id << "]" << endl;
    }

    bool operator < (const Student& other) const {
        return (this->id < other.id);
    }
};

int main()
{
    multiset<int> MS = {10, 20, 5, 10, 15, 20, 4};

    cout << "size = " << MS.size() << endl;

    MS.insert(100);
    MS.insert(10);
    cout << "size = " << MS.size() << endl;

    for (auto& el: MS) {
        cout << el << " ";
    }
    cout << endl;

//    auto it = MS.erase(MS.find(10));
//    cout << *it << endl;

    int num_erased = MS.erase(10);
    cout << "num_erased = " << num_erased << endl;

    for (auto& el: MS) {
        cout << el << " ";
    }
    cout << endl;

//    multiset<int>::iterator ub = MS.upper_bound(10);
    auto ub = MS.upper_bound(10);
    auto lb = MS.lower_bound(10);
    cout << "ub = " << *ub << endl;
    cout << "lb = " << *lb << endl;

    MS.insert({-10, -30, -20});
    for (auto& el: MS) {
        cout << el << " ";
    }
    cout << endl;

    vector<int> v = {10, 20, 15, 5, 4};
    MS.insert(v.begin(), v.end());
    for (auto& el: MS) {
        cout << el << " ";
    }
    cout << endl;

    //-------------------------
    multiset<Student> sms = {{50, "Simon"}, {20, "Thomas"}, {50, "Simon_Junior"}};
    for (auto& st: sms) {
        st.Print_student();
    }


    return 0;
}
