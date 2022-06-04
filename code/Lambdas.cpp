
#include <iostream>

int calc(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int add(int a, int b) {
    return a + b;
}

int main() {
    int a = 1, b = 2;

    auto operation = [](int a, int b) -> int {
        return a * b;  
    };
    
    std::cout << calc(a, b, &add) << std::endl;
    std::cout << "lambda: " << calc(a, b, operation);
}