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
	Arithmetic a; //������ ��. ����������
	Geometric g; //������ ����. ���������

	while (flag)
	{
		//����
		system("cls");//������� ��������� ������
		cout << "1) �������������� ����������" << endl;
		cout << "2) �������������� ����������" << endl;
		cout << "0) �����" << endl;
		cout << "�������� �������: ";
		cin >> menu;

		switch (menu)
		{
		case 1: Foo(&a); break; //�������� ������� ������� � ��������������� �������
		case 2: Foo(&g); break; //�������� ������� ������� � ��������������� �������
		case 0: flag = false;
		}
	}
	return 0;
}