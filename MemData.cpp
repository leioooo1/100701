
#include "MemData.h"


MemData::MemData()
{
}


MemData::~MemData()
{
}

int MemData::read(Student stu[])
{
	stu[0].setName("Alice");
	stu[0].setGender("Female");
	stu[0].setAge(20);

	stu[1].setName("Bob");
	stu[1].setGender("Male");
	stu[1].setAge(22);

	stu[2].setName("Charlie");
	stu[2].setGender("Male");
	stu[2].setAge(21);
	return 3;
}