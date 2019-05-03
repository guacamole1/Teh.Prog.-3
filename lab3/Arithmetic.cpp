#include "Arithmetic.h"
#include <iostream>
#include <fstream> //��� ������ � �������

using namespace std;

//�����������, ���������� ������ �� �����
Arithmetic::Arithmetic()
{
	ifstream fin("Arithmetic.txt", ios_base::in);
	if (!fin.is_open()) //�������� �� �������� �����
	{
		cout << "Arithmetic.txt �� �������� ��� ������!" << endl;
		system("pause");
		exit(1); //���� ���� �� ��������, �� ��������� ������ ��������� � ����� ������ 1
	}
	//���������� ������ �� �����, �������� ��������� cin >> first, ������ ������ �������� �� �����������, � �� �����
	fin >> first >> dif;

	fin.close(); //�������� ����
}

//����������, ������ ������ � ����
Arithmetic::~Arithmetic()
{
	ofstream fout("Arithmetic.txt", ios_base::out);
	if (!fout.is_open()) //�������� �� �������� �����
	{
		cout << "���� Arithmetic.txt �� �������� ��� ������!" << endl;
		system("pause");
		exit(1); //���� ���� �� ��������, �� ��������� ������ ��������� � ����� ������ 1
	}
	/* ������ ������ � ����, �������� ���������� cout << first << " ", ������ ������ ��������� ��
	� ��������� ������, � � ���� */
	fout << first << " " << dif;

	fout.close(); //�������� ����
}

//��������������� ����������� �������
void Arithmetic::sumProg(int size)
{
	double sum = 0.0; //����� ���������� ����� 0
	//�������, ��� ��� �������������� ���������� � � ��������
	cout << endl << "�������������� ���������� (�������� " << dif << "): ";
	//����� �� ���� ������� ���, ������� ������ �������� �� ����� ���������
	for (int i = 0; i < size; ++i)
	{
		cout << first + dif * i << " "; //������� ��������� �������
		sum += first + dif * i; //���������� ��������� ������� � �����
	}
	cout << endl << endl << "����� " << size << " ���������: " << sum << endl << endl; //������� �����
}

//������� ��������� ������
void Arithmetic::changeData()
{
	cout << endl <<  "������� ����� ������:" << endl; //������ ������ ����� ������
	cout << "������ �������: ";
	cin >> first; //������ ����� ������ �����
	cout << "��������: ";
	cin >> dif; //������ ����� ��������
}
