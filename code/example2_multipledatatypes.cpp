#include <iostream>

template<class T>
class MemoryCleaner {
    T obj;

public:
    MemoryCleaner();
    ~MemoryCleaner();

    T GetObject();
};

template<class T>
MemoryCleaner<T>::MemoryCleaner() {
        obj = new T;
}

template<class T>
MemoryCleaner<T>::~MemoryCleaner() {
    delete obj;
    obj = nullptr;
}

template<class T>
T MemoryCleaner<T>::GetObject() {
    return obj;
}

class Student {

};

int main() {
    MemoryCleaner<Student*> object;
    Student* ptr = object.GetObject();
}