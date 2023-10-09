#include "App.h"
#include "MemData.h"
#include "TxtData.h"
#include <iostream>
using namespace std;
int main()
{
	// 	Student stu1;
	// 	stu1.setName("王雷");
	// 	stu1.setAge(29);
	// 	stu1.setGender("男");
	// 	cout << stu1.getAge() << endl;
	// 	cout << stu1;
	App app;
	LoadData* p = nullptr;

	int n = 0;
	cout << "请选择数据源 1.内存 2.txt" << endl;
	cin >> n;
	if (n == 1) {
		p = new MemData;
	}
	else if (n == 2)
	{
		p = new TxtData;
	}
	app.run(p);
	return 0;
}