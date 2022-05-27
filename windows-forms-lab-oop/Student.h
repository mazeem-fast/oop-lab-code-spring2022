#pragma once
#include <string>

class Student
{
	std::string name;
	int roll_number;
	int marks;

public:
	void SetName(std::string name) {
		this->name = name;
	}

	void SetRollNumber(int roll) {
		this->roll_number = roll;
	}

	void SetMarks(int marks) {
		this->marks = marks;
	}

	std::string GetName() {
		return name;
	}

	int GetRollNumber() {
		return roll_number;
	}

	int GetMarks() {
		return marks;
	}
};

