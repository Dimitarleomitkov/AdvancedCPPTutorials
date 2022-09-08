#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    auto it = v.begin() + 4; // Pointing to 5
    cout << "*it => " << *it << endl;
    cout << "it - begin => " << it - v.begin() << endl;

    // The iterator is invalid if we do this.
//    v.insert(it, 100); // {1, 2, 3, 4, 100, 5, 6, 7}
//    cout << "*it => " << *it << endl;
//    cout << "it - begin => " << it - v.begin() << endl;
//    cout << "v[4] => " << v[4] << endl;

    it =  v.insert(it, 100); // {1, 2, 3, 4, 100, 5, 6, 7}
    cout << "*it => " << *it << endl;
    cout << "it - begin => " << it - v.begin() << endl;
    cout << "v[4] => " << v[4] << endl;

    return 0;
}
