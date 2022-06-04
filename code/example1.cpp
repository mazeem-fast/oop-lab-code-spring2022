#include <iostream>

template<class T, class U>
T add(T a, U b) {
    return a + b;
}

int main() {
    std::cout << add(1, 2);
    std::cout << add(1, 2.3);
    std::string a="1", b="2";
    std::cout << std::endl << add(a, b);
}