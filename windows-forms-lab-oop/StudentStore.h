#pragma once
#include "Student.h"

class StudentStore
{
	Student* student_list;
	int list_size = 10;

public:
	StudentStore() {
		student_list = new Student[10];
		for (int i = 0; i < GetListSize(); i++) {
			this->student_list[i].SetName("adata");
		}
	}

	Student* GetStudentList() {
		return this->student_list;
	}

	int GetListSize() {
		return list_size;
	}

	~StudentStore() {
		delete[] student_list;
	}
};

