/*
Set
    size()
    =
    clear()
    count(), find()
    empty()
    insert(key), insert(it1, it2), insert(init_list)
    erase(it), erase(it1, it2), erase(key)
    upper_bound(key), lower_bound(key)
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
        return (this->id > other.id);
    }
};

int main()
{
    set<int> S = {10, 20, 5, 10, 15, 20, 4};

    cout << "size = " << S.size() << endl;

    S.insert(100);
    S.insert(10);
    cout << "size = " << S.size() << endl;

    for (auto& el: S) {
        cout << el << " ";
    }
    cout << endl;

//    auto it = S.erase(S.find(10));
//    cout << *it << endl;
//    for (auto& el: S) {
//        cout << el << " ";
//    }
//    cout << endl;

    int num_erased = S.erase(10);
    cout << "num_erased = " << num_erased <<endl;
    for (auto& el: S) {
        cout << el << " ";
    }
    cout << endl;

    auto ub = S.upper_bound(15);
    auto lb = S.lower_bound(15);
    cout << "upper bound = " << *ub << endl;
    cout << "lower bound = " << *lb << endl;

    S.insert({-10, -30, -20});
    for (auto& el: S) {
        cout << el << " ";
    }
    cout << endl;

    vector<int> v = {10, 20, 15, 5, 4};
    S.insert(v.begin(), v.end());
    for (auto& el: S) {
        cout << el << " ";
    }
    cout << endl;

    //-----------------------
    set<Student> sset = {{50, "Simon"}, {20, "Thomas"}};
    for (auto& st: sset) {
        st.Print_student();
    }

    return 0;
}
