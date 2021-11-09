#pragma once
#include <iostream>
#include <fstream>
#include "Worker.h"
#include "emloyee.h"
#include "boss.h"
#include "manger.h"

#define FILENAME "empFile.txt"

using namespace std;

class WorkerManger {
public:
	WorkerManger();

	void Show_Menu();

	void exitSystem();

	void add_Emp();

	void save();  //保存文件

	int get_EmpNum();

	void init_Emp();

	~WorkerManger();

	void Show_Emp();

	void Del_Emp();

	int IsExist(int id);  //按照职工编号判断职工是否存在，若存在返回职工在数组中的位置，不存在返回-1

	void Mod_Emp();

	void Find_Emp();

	void Sort_Emp();

	void Clean_File();

	int m_EmpNum;

	Worker ** m_EmpArray;

	bool m_FileIsEmpty;
};

