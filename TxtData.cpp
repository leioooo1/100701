#include "TxtData.h"

TxtData::TxtData()
{
}
TxtData::~TxtData()
{
}
int TxtData::read(Student stu[])
{
	FILE* p;
	if (fopen_s(&p, "E:\\VS\\100701\\TxtData.txt", "r"))
	{
		return -1;
	}
	int i = 0;
	do
	{
		char name[20] = { 0 };
		char gender[20] = { 0 };
		int age = 0;
		fscanf_s(p, "%s%s%d", name, sizeof(name), gender, sizeof(gender), &age);
		stu[i].setName(name);
		stu[i].setGender(gender);
		stu[i++].setAge(age);
	} while (!feof(p));
	fclose(p);
	return i;
}
