#include "boss.h"
Boss::Boss(int id, string name, int dId) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Boss::showInfo() {
	cout << "ְ�����:" << this->m_Id;
	cout << "\tְ������:" << this->m_Name;
	cout << "\t��λ:" << this->getDeptName();
	cout << "\t��λְ��:����˾��������" << endl;
}

string Boss::getDeptName() {
	return string("�ϰ�");
}