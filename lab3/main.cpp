#include <iostream>
#include "Arithmetic.h"
#include "Geometric.h"
#include "Friend.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	bool flag = true;
	int menu;
	Arithmetic a; //объект ар. прогрессии
	Geometric g; //объект геом. прогессии

	while (flag)
	{
		//меню
		system("cls");//очистка командной строки
		cout << "1) Арифметическая прогрессия" << endl;
		cout << "2) Геометрическая прогрессия" << endl;
		cout << "0) Выход" << endl;
		cout << "Выберите команду: ";
		cin >> menu;

		switch (menu)
		{
		case 1: Foo(&a); break; //передача адресса объекта в вспомогаетльную функцию
		case 2: Foo(&g); break; //передача адресса объекта в вспомогаетльную функцию
		case 0: flag = false;
		}
	}
	return 0;
}