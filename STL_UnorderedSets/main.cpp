/*
Unordered Set
    size()
    =
    clear()
    count(), find()
    empty()
    insert(key), insert(it1, it2), insert(init_list)
    erase(it), erase(it1, it2), erase(key)
    bucket_count(), load_factor(), ...
*/

#include <iostream>
#include <functional>
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
    size_t operator()(const Student& S) const {
        return (hash<int>{}(S.id) + hash<string>{}(S.name));
    }
};

int main()
{
    /*
    size_t h1 = hash<string>{}("Hello");
    size_t h2 = hash<string>{}("World");

    cout << h1 << ", " << h2 << endl;

    cout << hash<int>{}(100) << endl;
    cout << hash<float>{}(100.5) << endl;
    */

    unordered_set<int> US = {5, 10, 4, 20, 5, 5, 15};
    for (int x: US) {
        cout << x << " ";
    }
    cout << endl;

    cout << "size = " << US.size() << endl;
    cout << "count(5) = " << US.count(5) << endl;
    cout << "num erased(5) " << US.erase(5) << endl;
    cout << boolalpha << "found 16 = " << (US.find(16) != US.end()) << endl;
    cout << "num buckets = " << US.bucket_count() <<  endl;
    cout << "load factor = " << US.load_factor() << endl;

    unordered_set<Student, StudentHashFunction> USS = {{50, "Simon"}, {30, "Thomas"}};
    for (auto& st: USS) {
        st.Print_student();
    }

    return 0;
}
