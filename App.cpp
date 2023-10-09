#include "App.h"
App::App() :pos(0)
{
}

void App::run(LoadData* p)
{
	if (!p) {
		return;
	}
	pos = p->read(stu);
	if (pos <= 0) {
		return;
	}
	double totalAge = 0;
	for (int i = 0; i < pos; ++i)
	{
		cout << stu[i] << endl;
		totalAge += stu[i].getAge();
	}
	cout << "Æ½¾ùÄêÁä:" << totalAge / pos << endl;
}
