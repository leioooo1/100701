#pragma once

#include <iostream>
using namespace std;
class Student {
public:
	Student();
	Student(const char* name, const char* Gender, const int age);
	friend ostream& operator<<(ostream& out, const Student& other);
	void setName(const char* name);
	void setAge(const int age);
	void setGender(const char* name);
	int getAge()const;

private:
	char name[10];
	char Gender[10];
	int age;
};
