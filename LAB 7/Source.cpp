#include <iostream>
using namespace std;

int b[20000][20000] = {};

int main()
{
	cout << "error" << endl;
	for (int i = 0; i < 100000000000; i++)
	{
		long long * b = new long long;
		(*b) = 1;
		delete b;
	};
}
// 1. ������������ ������
// �������� ������ ����������, ��� ������������ �������������
// ���� ������������� (stack overflow)
// int b[100000][100000] = {}; - ������������ �����

//������������ �������� ��� ���������� ����� ���� �������� ������� ������� ������
// ������� ��������� ������������. ��� ���������� ���� ��������� ��

// 2. ���������
// ������������ �� ���������� � ������� ��������� new
// ������ � ������� � ������������ �� ������� ����� ���������
// ���_������ * ���_���������� = new ���_������
// double * var_dbl = = new double;

// 3. ������ � ������������ ������
// ������ ���������� ������ ������������������ �� ���������� �� ����������
// ���� �� �� ���������� ���������, ����� ������������ �� ��� ����� �������� �� �����������
// ������������, ��� ������������ ������������� ������ , ���������� ����� ��������� ��� ��
// ��������� �� ������ ���������� ������ �� ��������� �������
// ���� ��� ������������, � ����� ��������� �������� delete ��� �����������
// ������ ��
// delete var_dbl;

// 4. ��������� �������� � ������������ ������//
// ����� �������� ���� ������ ��� ��� �������� ������� ������
// ��� ������ ����������� ������������ ������� ���������� �� ����������� �������
// ��������, ���� ���������� �������� ���������� ������ ������� �������� ����������,
// ���������� ��������� �� ������ ������, � ����� ��������� ������
// � ������������ ����������, ������ ����������� ������
// ����� ������� � ����������� ������ �������� ���������, ����������� ��������
// ���������� ������ � ������ ������ �����������
// ��������� ������� ����� ��������� � ������� ��������� delete[] (������ ������)
// ������ ������� ���������� � ����� ������� �����������

// 1D ������
// ���_������ * ��� = new * ���_������[������]

// 2D ������
// ���_������ ** ��� = new ** ���_������[������1]
// for(int i; i < ������1; i++) {���[i] = new ���_������[������2]}
// for(int i; i < ������1; i++) {delete[] =  ��� [i]}
// delete [] ���

// _____!!!!!�������� �������� 3D!!!!!_____

// 3D ������
// for(int i; i < ������1; i++)
//{
//  ���[i] = new ** ���_������[������2]
//      for (int j; j < ������2; j++)
//  {
//          ���[i][j] = new ���_������[������3]
//  }
//}
// ���_������ *** ��� = new *** ���_������[������]
//
//