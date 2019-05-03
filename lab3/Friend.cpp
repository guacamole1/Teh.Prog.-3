#include <iostream>
#include "Arithmetic.h"
#include "Geometric.h"

using namespace std;

void Foo(BaseClass *ptr)
{
	bool flag = true;
	int menu;
	int count; //переменная, в которую будем записывать, сколько элементов в прогресии мы хотим увидеть
	while (flag)
	{
		system("cls");//очистка командной строки
		cout << "1) Вывод суммы n-элементов" << endl;
		cout << "2) Изменение данных" << endl;
		cout << "0) Выход в основное меню" << endl;
		cout << "Выберите команду: ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << endl << "Введите количество элементов: ";
			cin >> count;
			ptr->sumProg(count); //вызов виртуальной функции через указатель базового класса
			system("pause");
			break;
		case 2:
			ptr->changeData(); //вызов виртуальной функции через указатель базового класса
			break;
		case 0: flag = false;
		}
	}
}