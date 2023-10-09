#pragma once
#pragma once
#include "LoadData.h"
class TxtData :
	public LoadData {
public:
	TxtData();
	~TxtData();
	int read(Student stu[]);
};