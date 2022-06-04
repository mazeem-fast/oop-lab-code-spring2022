#include <iostream>
#include <vector>

class Student {
public:
    int *ptr;
    // int u;
    // std::string p;

    Student() {

    }

    Student(const Student& a) {
        this->ptr = a.ptr;
    }

    ~Student() {
    }
};

int main() {
    std::vector<Student> list;
    Student t;
    t.ptr = new int[5];
    t.ptr[0] = 990;
    list.push_back(t);
    list[0].ptr[0] = 999;
    // std::cout << &(*list.begin()) << std::endl;
    // list.erase(list.begin());
    // Student u;
    // list.push_back(u);
    // list[1].~Student();
    // std::cout << &(*list.begin()) << std::endl;
    std::cout << t.ptr[0] << std::endl;
}