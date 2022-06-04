#include <iostream>

template<class T, int SIZE>
class List {
public:
    T* arr[SIZE];
    int count = 1;

public:
    T removelastelement() {
        T* ptr = arr[count - 1];
        arr[count - 1] = NULL;
        count--;
        return *ptr;
    }
};

int main() {
    List<double, 10> list;
    double ptr =  1.9;
    list.arr[0] = &ptr;
    double returnval = list.removelastelement();
    std::cout << returnval;
}

