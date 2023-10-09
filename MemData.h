#pragma once
#include "LoadData.h"
class MemData :
	public LoadData {
public:
	MemData();
	~MemData();
	int read(Student stu[]);

};
