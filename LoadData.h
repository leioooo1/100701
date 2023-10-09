#pragma once
#include "Student.h"
class LoadData {
public:
	LoadData();
	virtual int read(Student stu[]);
	~LoadData();
};
