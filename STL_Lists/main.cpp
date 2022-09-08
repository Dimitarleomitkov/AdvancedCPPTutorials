/*
Lists
    size(), max_size()
    =
    front(), back()
    empty()
    begin(), end(), rbegin(), rend()
    insert(), erase(), remove()
    clear()
    push_back(), push_front(), pop_back(), pop_front()
*/

#include <iostream>
#include <list>
#include <vector>

using namespace std;

void Print_list (list<int>& ll)
{
    for(list<int>::iterator it = ll.begin(); it != ll.end(); ++it) {
        cout << *it << "\t";
    }
    cout << endl;
}

int main()
{
    list<int> nums = {1, 2, 3, 4, 5};

    Print_list(nums);

    cout << "Size = " << nums.size() << endl;

    list<int> nums2 = nums;
    Print_list(nums2);

    cout << "front = " << nums.front() << ", back = " << nums.back() << endl;
    cout << "empty: " << boolalpha << nums.empty() << endl;
    cout << "begin = " << *nums.begin() << ", rbegin = " << *nums.rbegin() << endl;

    // Vector insert
    vector<int> vec = {1, 2, 3, 4, 5};

    vec.insert(vec.begin() + 2, 100);
    cout << "vector[2] = " << vec[2] << endl;

    // List insert
    // nums.insert(nums.begin() + 2, 100); // This would throw an error
    Print_list(nums);
    list<int>::iterator it = nums.begin();
    while (*it != 3 && it != nums.end()) {
        it++;
    }
    nums.insert(it, 100);
    Print_list(nums);

    nums.erase(it);
    Print_list(nums);

    // Remove removes the item with the passed value.
    nums.remove(4);
    Print_list(nums);

    nums.clear();
    Print_list(nums);
    cout << boolalpha << nums.empty() << endl;
    Print_list(nums2);

    nums2.push_back(-100);
    nums2.push_front(-200);
    Print_list(nums2);

    nums2.pop_back();
    nums2.pop_front();
    Print_list(nums2);

    return 0;
}
