/*
Queue
    size()
    =
    front(), back()
    empty()
    push(), pop()
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> Q;

    for (int i = 1; i <= 5; ++i) {
        Q.push(i);
    }

    cout << "size = " << Q.size() << endl;
    cout << "front = " << Q.front() << ", back = " << Q.back() << endl;

    Q.pop();
    Q.pop();

    cout << "size = " << Q.size() << endl;
    cout << "front = " << Q.front() << ", back = " << Q.back() << endl;

    cout << "empty = " << boolalpha << Q.empty() << endl;

    return 0;
}
