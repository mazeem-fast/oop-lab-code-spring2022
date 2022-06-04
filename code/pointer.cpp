#include <iostream>

class Contact {
public:
    int data;

    Contact() {
        data = 20;
    }

    Contact(const Contact &a) {
        this->data = a.data;
        std::cout << "copy called" << std::endl;
    }

    // Contact(const Contact &&a) {
    //     this->data = a.data;
    //     std::cout << "move called" << std::endl;
    // }

    void operator=(const Contact& a) {
        std::cout << "= called" << std::endl;
        this->data = a.data;
    }
};

Contact& data() {
    return *(new Contact());
}


int main() {
    Contact& ptr = data();
    std::cout << ptr.data;
    delete &ptr;
    return 0;
}