#include <iostream>
#include <string>
using namespace std;

class Student {
private:	
	int roll;
	string name;
	double gpa;
	string *courses;


public:
	int getRoll() {
		return roll;
	}

	double getGpa() {
		return gpa;
	}

	void setRoll(int rollNo) {
		roll = rollNo;
	}

	void initCourses() {
		this->courses = new string[10];
	}

	Student() {
		courses = new string[10];
	}

	Student(double gpa1) {
		gpa = gpa1;
	}

	~Student() {
		delete[] courses;
	}
};



int main() {
	Student student(3.0);
	int a;
	cin >> a;
	student.setRoll(a);
	
	int rollNoOfFirstStudent = student.getRoll();
	Student student2(1.3);
	cout << student2.getGpa() + student.getGpa();
	Student student3((student2.getGpa() + student.getGpa()));

}
