#include <iostream>
#include <vector>

class Student {
public:
    int d = 2;
    void print() {
        std::cout << "Student" << std::endl;
    }

    Student(){

    }

     void operator=(const Student &d) {
         std::cout << "= operator called " << this << std::endl;
         std::cout << "= operator called with" << &d << std::endl;
     }

    Student(Student &t) {
        // Student u;
        // Student &p = u;
        std::cout << "copy constructor called for " << this << " called with " << &t << "\n";
    }

    ~Student() {
        std::cout << " destructor called for " << this << "\n";
    }

    Student copy() {
        // Student t;
        // std::cout << &t << std::endl;
        // t = *this;
        this->d = 10;
        std::cout << "this.d is set to 10 : " << this << std::endl;
        return *this; 
    }

    Student copy2() {
        Student a;
        a.d = -1;
        return a;
    }

    Student* copy3() {
        Student *a = new Student;
        a->d = -2;
        return a;
    }
};

int main() {
    Student* arr = new Student[10];
    // Student *ptr = arr;
    // std::cout << arr << "\n";
    // std::cout << ++arr;
    // Student t = *arr;
    // delete arr;
    // Student& ref = *arr;
    // arr = new Student;
    // arr--;
    // delete[] arr;

    // Student* ptr = &
    // Student for_vector;
    // std::vector<Student> list;
    // list.push_back(for_vector);
    std::cout << arr << std::endl;
    Student d = arr[0].copy();
    Student b = arr[0].copy2();
    Student c = *arr[0].copy3();
    std::cout << b.d << std::endl;
    // std::cout << d << std::endl;
    // std::cout << b << std::endl;
    return 0;
}