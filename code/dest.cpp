#include <iostream>

class C {
public:
    ~C() {
        std::cout << "C:destructor called" << "\n";
    }
};

class B {
    C* list;

public:
    B() {
        list = new C[20];
    }

    ~B() {
        delete[] this->list;
    }
};

int main() {
    B b;
    return 0;
}