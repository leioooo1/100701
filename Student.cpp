
#include "Student.h"

Student::Student()
{
	memset(name, 0, sizeof(name));
	memset(Gender, 0, sizeof(Gender));
	age = 0;
}
Student::Student(const char* name, const char* Gender, const int age)
{
	strcpy_s(this->name, name);
	strcpy_s(this->Gender, Gender);
	this->age = age;
}

void Student::setName(const char* name)
{
	strcpy_s(this->name, 10, name);
}

void Student::setAge(const int age)
{
	this->age = age;
}

void Student::setGender(const char* Gender)
{
	strcpy_s(this->Gender, 10, Gender);

}

int Student::getAge() const
{
	return this->age;
}

ostream& operator<<(ostream& out, const Student& other)
{
	out << "name:" << other.name << " "
		<< "Gender:" << other.Gender << " "
		<< "age:" << other.age << endl;
	return out;
}