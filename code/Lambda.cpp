#include <iostream>
#include <vector>
#include <algorithm>


int calc(int a, int b, int (*func)(int, int)) {
    return func(a, b);
}

int add(int a, int b) {
    return a + b;
}


void sort(int* arr, int size, bool (*SwapOrNot)(int, int)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if  (SwapOrNot(arr[i], arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

class Student {
    int marks;

public: int GetMarks() {
    return marks;
    }

    void SetMarks(int mark) {
        this->marks = mark;
    }


};

int main() {
    int arr[] = {3,5,2,6,81,2,0,-1};
    sort(arr, 8, [](int x, int y) -> bool {
        if (x < y) {
            return false;
        }
        return true;
    });

    // for (int i = 0; i < 8; i++) {
    //     std::cout << arr[i] << " " ;
    // }

    std::vector<Student> students;
    for (int i = 0; i < 8; i++) {
        Student s;
        s.SetMarks(i * 10);
        students.push_back(s);
    }
    

    std::sort(students.begin(), students.end(), [](Student &x, Student &y) -> bool {
        if (x.GetMarks() < y.GetMarks()) {
            return false;
        }
        return true;
    });

    for (int i = 0 ; i< 8; i++) {
        std::cout << students[i].GetMarks() << " ";
    }

    return 0;
}