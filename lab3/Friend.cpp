#include <iostream>
#include "Arithmetic.h"
#include "Geometric.h"

using namespace std;

void Foo(BaseClass *ptr)
{
	bool flag = true;
	int menu;
	int count; //����������, � ������� ����� ����������, ������� ��������� � ��������� �� ����� �������
	while (flag)
	{
		system("cls");//������� ��������� ������
		cout << "1) ����� ����� n-���������" << endl;
		cout << "2) ��������� ������" << endl;
		cout << "0) ����� � �������� ����" << endl;
		cout << "�������� �������: ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << endl << "������� ���������� ���������: ";
			cin >> count;
			ptr->sumProg(count); //����� ����������� ������� ����� ��������� �������� ������
			system("pause");
			break;
		case 2:
			ptr->changeData(); //����� ����������� ������� ����� ��������� �������� ������
			break;
		case 0: flag = false;
		}
	}
}