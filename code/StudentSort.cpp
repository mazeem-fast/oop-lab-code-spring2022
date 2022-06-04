#include <iostream>
#include <vector>
#include <algorithm>

class Student {
    int marks;

public: int GetMarks() {
    return marks;
    }

    void SetMarks(int mark) {
        this->marks = mark;
    }


};

template<typename T>
void sort(T *arr, const int size, bool (*SwapOrNot)(int, int)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (SwapOrNot(arr[i], arr[j])) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    const int size = 7;
    std::vector<Student> students;

    for (int i = 1; i < size + 1; i++) {
        Student s;
        s.SetMarks(i * 10);
        students.push_back(s);
    }


    // sort(, size, [](int a, int b) -> bool {
    //     if (a < b) {
    //         return false;
    //     }
    //     return true;
    // });

    for (auto student: students) {
        std::cout << student.GetMarks() << " ";
    }

    std::cout << "\n";

    std::sort(students.begin(), students.end(), [](Student i, Student j) -> bool {
        if (i.GetMarks() > j.GetMarks()) {
            return true;
        }
        return false;
    });

     for (auto student: students) {
        std::cout << student.GetMarks() << " ";
    }
}