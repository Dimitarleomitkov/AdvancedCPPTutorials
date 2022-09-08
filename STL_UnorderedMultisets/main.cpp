/*
Unordered Multiset
    size()
    =
    clear()
    count(), find(), equal_range()
    empty()
    insert(key), insert(it1, it2), insert(init_list)
    erase(it), erase(it1, it2), erase(key)
    bucket_count(), load_factor(), ...
*/

#include <iostream>
#include <unordered_set>

using namespace std;

class Student {
public:
    int id;
    string name;

    bool operator == (const Student& S) const {
        return (this->id == S.id && this->name == S.name);
    }

    void Print_student() const {
        cout << "[id = " << id << ", name = " << name << "]" << endl;
    }
};

class StudentHashFunction {
public:
    size_t operator () (const Student& S) const {
        return (hash<int>{}(S.id) + hash<string>{}(S.name));
    }
};

int main()
{
    unordered_multiset<int> UMS = {5, 10, 4, 20, 5, 5, 15};
    for (int x: UMS) {
        cout << x << " ";
    }
    cout << endl;

    auto its = UMS.equal_range(5);
    for (auto it = its.first; it != its.second; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "size = " << UMS.size() << endl;
    cout << "count(5) = " << UMS.count(5) << endl;
    cout << boolalpha << "found 5 = " << (UMS.find(5) != UMS.end()) << endl;
    cout << "num erased(5) " << UMS.erase(5) << endl;
    cout << boolalpha << "found 5 = " << (UMS.find(5) != UMS.end()) << endl;
    cout << boolalpha << "found 16 = " << (UMS.find(16) != UMS.end()) << endl;
    cout << "num buckets = " << UMS.bucket_count() << endl;
    cout << "load factor = " << UMS.load_factor() << endl;

    unordered_multiset<Student, StudentHashFunction> SUMS = {{50, "Simon"}, {20, "Thomas"}, {50, "Simon"}};
    for (auto& st: SUMS) {
        st.Print_student();
    }
    cout << endl;

    return 0;
}
