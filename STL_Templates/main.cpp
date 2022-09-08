#include <iostream>

template <typename T>
T area_rectangle(T a, T b)
{
    return a * b;
}

int main()
{
    std::cout << area_rectangle<int>(4.5, 7.3) << std::endl;
    std::cout << area_rectangle<float>(4.5, 7.3) << std::endl;
    std::cout << area_rectangle<double>(4.5, 7.3) << std::endl;
    std::cout << area_rectangle<char>(4.5, 7.3) << std::endl;
    return 0;
}
