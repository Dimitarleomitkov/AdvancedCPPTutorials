/*
Deque
    size()
    =, []
    front(), back()
    empty()
    begin(), end(), rbegin(), rend()
    insert(), erase()
    clear()
    push_back(), push_front(), pop_back(), pop_front()
*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d = {1, 2, 3, 4, 5};

    cout << "size = " << d.size() << endl;
    cout << "Third element = " << d[2] << endl;
    cout << "front = " << d.front() << ", back = " << d.back() << endl;

    for (deque<int>::iterator it = d.begin(); it != d.end(); ++it) {
        cout << *it << "\t";
    }
    cout << endl;

    for (deque<int>::reverse_iterator it = d.rbegin(); it != d.rend(); ++it) {
        cout << *it << "\t";
    }
    cout << endl;

    d.push_back(100);
    d.push_back(200);

    d.push_front(-100);
    d.push_front(-200);

    for (deque<int>::iterator it = d.begin(); it != d.end(); ++it) {
        cout << *it << "\t";
    }
    cout << endl;

    d.pop_back();
    d.pop_front();

    for (deque<int>::iterator it = d.begin(); it != d.end(); ++it) {
        cout << *it << "\t";
    }
    cout << endl;

    d.clear();

    for (deque<int>::iterator it = d.begin(); it != d.end(); ++it) {
        cout << *it << "\t";
    }
    cout << "empty = " << boolalpha << d.empty() << endl;


    return 0;
}
