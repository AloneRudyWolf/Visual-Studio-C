// �������
//������������ ������ 4
//1)����������� � ���������
//�������-�������� ����,������� ������ ����������� ��� ( �������������)
//������� � �������� ���������.
//
//���������� ���������� 
//������������_��� ���_������� (���1 ���_���������,���2 ���_���������2 ......)

//���������� �������-���������� ,���� �� ��������� � ������ � ������� 
// ������ ������ ���� ��������� �� �� ������� �������������
//��������� ������ � ����������� ����� ���� ������� �� ������� ������� ������
// �.� ���������� �������� ����� ���� �������, � ,��������,����� ������ � ���� ,
// �� �� ������������  � ������  � �� ���� ������ ������ ������  ������� ��� ������


//��������� ������(������������� ������ )
//���_������� (��������1,�������2)
//���������� = ���_������ (��������1,��������2....)

//������������ ������ ������ ,�.�. ��������� ����������� ������������ 
//���� � ��� �� �������� ���� �� �������� ��� ������� ,� ������ ������ �� �����

#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;

double function_add(double p1, double p2) {
	p1 + p2;
	return p1 + p2;//������������ ��������
}
void function_add_without_return(double p1, double p2) {

	cout << "������� �� ���������� �������� ";
	return; // � ������ void �������� �� ������������
}


int fnc2(double const a, double&b, double &c)
{
	int i = a * b*c;
	c = 100500;
	b = 0;
	return a + c;
}

int fnc2ptr(double const a, double *b, double *c) {
	int i = a * (*b) * (*c);
	(*c) = 100500;
	(*b) = 0;
	return a + (*c);
}


// �������� �������� � �������
//������ ������ �������� (� �����������) ������� � �������
void fnc4_2(int matr[][3]) {
	matr[1][1] = 10;
}
//������ ������ �������� (� ����������� ) ������� � ������ 




int main()
{

	setlocale(LC_ALL, "Russian");
	double c = function_add(10.5, 2.5); // �������,������������ �������� , ����� ������� � ��� 
	cout << "c = function_add(10.5,2.5) = " << c;
	function_add_without_return(10.2, 2.5);//� ���...
	cout << "\n";


	function_add_without_return(10.2, 2.5);// ������, �� ������������ �������� -�������� ��� ������������ 

	// �������� ���������� �� ������ � �� ��������


	// ��������,���������� � ������� ������� ������� ���������� ����� �����

	// ��� �� ������� ����������� �������� ��� ���������� ���������� ��� ������� ��������� 
	//�� ������� & - ��� ����������� �������� �� ������
	// ������������ ��� ���� �� �������� ������ ���������� �� �������

	double k = 10.5;
	const int p = 10;
	int m = fnkc1(k);
	cout << "fnkc1(k) = " << m << endl;
	double a = 1.1, b = 2.2, c = 3.3;
	m = fnc2(a, b, c);
	cout << "fnc2:m = " << m << "\ta = " << a << "\tb = " << b << "\tc = ";
	k = 10;
	double l = 11, n = 15, o = 19;



}