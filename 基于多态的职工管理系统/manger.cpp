#include "manger.h"
Manger::Manger(int id, string name, int dId) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Manger::showInfo() {
	cout << "ְ�����:" << this->m_Id;
	cout << "\tְ������:" << this->m_Name;
	cout << "\t��λ:" << this->getDeptName();
	cout << "\t��λְ��:����ϰ彻�������񣬲��·������Ա��" << endl;
}

string Manger::getDeptName() {
	return string("����");
}