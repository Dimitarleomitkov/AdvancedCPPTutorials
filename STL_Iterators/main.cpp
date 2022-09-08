#include <iostream>
#include <vector>

#define cout std::cout
#define endl std::endl

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    cout << "v.begin() => " << *v.begin() << endl;

    int *x = &v[6];
    x++;
    *x = -50;

    cout << "v.end() => " << *v.end() << endl;
    cout << "v.rbegin() => " << *v.rbegin() << endl;

    int *y = &v[0];
    y--;
    *y = 333;

    cout << "v.rend() => " << *v.rend() << endl;

    return 0;
}
