#include "emloyee.h"
Employee::Employee(int id,string name,int dId){
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Employee::showInfo() {
	cout << "职工编号:" << this->m_Id;
	cout << "\t职工姓名:" << this->m_Name;
	cout << "\t岗位:" << this->getDeptName();
	cout << "\t岗位职责:完成经理交给的任务" << endl;
}

string Employee::getDeptName() {
	return string("员工");
}