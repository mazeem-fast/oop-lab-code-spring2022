#include <iostream>
#include <string>

template<class T, int U=10>
class List {
public:
    T list[U];
};

int main() {
    List<char[]> list;
    list.list = "abc";
    return 0;
}