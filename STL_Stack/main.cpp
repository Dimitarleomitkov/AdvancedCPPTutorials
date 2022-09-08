/*
Stack
    size()
    =
    top()
    empty()
    push(), pop()
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;

    for (int i = 0; i < 5; ++i) {
        st.push(i);
    }

    cout << "size = " << st.size() << endl;
    cout << "top = " << st.top() << endl;

    st.pop();
    st.pop();

    cout << "size = " << st.size() << endl;
    cout << "top = " << st.top() << endl;

    if (st.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}
