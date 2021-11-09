#include <iostream>
#include "workerManger.h"
using namespace std;
int main()
{
	WorkerManger vm;
	int choice = 0;

	while (true) {
		vm.Show_Menu();
		cout << "ÇëÊäÈëÄãµÄÑ¡Ôñ:";
		cin >> choice;

		switch (choice) {
		case 0:
			vm.exitSystem();
			break;
		case 1:
			vm.add_Emp();
			break;
		case 2:
			vm.Show_Emp();
			break;
		case 3:
			vm.Del_Emp();
			break;
		case 4:
			vm.Mod_Emp();
			break;
		case 5:
			vm.Find_Emp();
			break;
		case 6:
			vm.Sort_Emp();
			break;
		case 7:
			vm.Clean_File();
			break;
		default:
			system("cls");
		}

	}
	
	return 0;
}