//  ���������
//������������ ������ �3
//���������-����������,�������� ������ ����� ���� ������ � ����������� ������
//���������-���������� ,�������� �����,���������� ������ ��������� � ����������� ������

#include "pch.h" // � "" � ������ ������� ������ ����� � ��������
#include <iostream>; //������� ������ <> -����� ����� � ��������������� ��������� �����
#include <locale.h>;
using namespace std;

int main() // ������������ ����� ����� � ���������
{


	setlocale(LC_ALL, "Russian");
	/*
	//1))
		//��������� ���������� ���������� (��� ������*���_���������)


	int a;
	double b;
	int*prt_int;
	prt_int = &a; // ������� �������� ��������� & -��������� ��������� ������
	double*prt_dbl;
	prt_dbl = &b;
	//��������� ����� ��� �������� � ����� ���� ������ �������� ������ ������(��������,��� ���� ������)
	//�� ���������,� ������ ���������� �� ����� ����������.
	//
// 2)) ������ ���������
	cout << "int pointer size = " << sizeof(prt_int);
	cout << "\n";
	cout << "double pointer size = " << sizeof(prt_dbl);
	cout << "\n";
	cout << "char pointer size = " << sizeof(char*);
	cout << "\n";
	cout << " long long pointer size = " << sizeof(long long*);
	cout << "\n";
	cout << "bool pointer size = " << sizeof(bool*);
	cout << "\n";


	// 3) ���������� ���������
	cout << " prt_int  = " << prt_int;
	cout << "\n";
	cout << " prt_dbl  = " << prt_dbl;

	//�������� ������������� ����������:����� �������� ��������,
	// ���������� �� ������� ���������
	//����� ��� ��� ��������� �������� *
	a = *prt_int; // �������� ������� �������� a
	int c = 0;
	b = a;
	b = *prt_int;
	cout << "*prt_int = " << *prt_int;
	cout << '\n';
	cout << "*prt_dbl = " << *prt_dbl;
	// � ������ ������ �� �64 ������ ���������� ����� 8 ����
	//

	int m1;
	//4) ������ ������� ������

	int arr2D[2][2] = { {1,2},{3,4} };
	int arr1D[2] = { 4,5 };
	//5) ��������� � �������
	//5.1) ��������� ������� ��� ������ ������ ��� ���������
	//��� ����������� ������� ����� ��� �������� �� ���������
	//� ������ double arr1D[n] arr1D ������ ��� (double*)
	//5.2)� ������ double arr2D[m][n] arr2D ������ ��� (double**)
	// ��������� �  arr2D[m] ����� �������� ��������� �� ��������� ������-������
	//�������� [] ���������� ���������� ������ � ��������� �������
	//arr1D[i] �� �� �����,��� � *(arr1D + i)


	//cout << "arr1D[2]= *(arr1D+2) = " << *(arr1D + 2);
	//cout << "arr2D[2][2]= *(*(arr2D+2)+2) = " << *(*(arr2D + 2) + 2);
	*/
	//������� 1
//������� �� ����� �������: 	��� ������ - ������ ���������������� ���������. 
	//��� ����� int, double, char, long, bool.
	int a;
	double b;
	char c;
	long long d;
	bool f;
	int *ptr_int = &a;
	double *ptr_double = &b;
	char *ptr_char = &c;
	long long *ptr_long = &d;
	bool *ptr_bool = &f;
	cout << "int pointer size    = " << sizeof(*ptr_int) << endl;
	cout << "double pointer size = " << sizeof(*ptr_double) << endl;
	cout << "char pointer size   = " << sizeof(*ptr_char) << endl;
	cout << "long pointer size   = " << sizeof(*ptr_long) << endl;
	cout << "bool pointer size   = " << sizeof(*ptr_bool) << endl;
	cout << "\n";
	cout << "\n";
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
												//������� 2
						//����������� ���� ������ ��� �������, ��������� � ������ ���������.

	char str[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int sum = 3;
	int t = 0;
	cout << "������� 10 �������� ";
	cout << '\n';
	for (int i = 0; i < 10; i++) {
		cin >> str[i];
	}

	for (int i = 0; i < 10; i++) {
		t = str[i] + sum;
		str[i] = char(t);
	}
	cout << '\n';
	cout << "����������� ������� co �������� �� 3 ������� ������ - ";
	for (int i = 0; i < 10; i++) {
		cout << str[i];
	}
	cout << '\n';
	cout << '\n';
	cout << '\n';

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

								//������� 3
				//����������� ���������� ��������� �������, ��������� � ������ ���������.
	cout << "���������� ���������";
	int kek[10]{ 8, 4, 6, 5, 7, 0, 2, 3, 1, 9 };
	int tem; //��������� ���������� ��� ������ ��������� ������� 
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (kek[j] > kek[j + 1]) {
				tem = kek[j];
				kek[j] = kek[j + 1];
				kek[j + 1] = tem;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		std::cout << kek[i] << "\t";
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	

												// ������� 4
						//����������� ��������� ���������� �������, ��������� � ������ ���������.
	cout << "\n";
	cout << "\n";
	cout << "\n��������� c���������\n";
	cout << "������� ���-�� ����� \n";
	int temp;
	int size;
	int *arr;
	cin >> size;
	if (size > 0)
	{

		arr = new int[size]; // ��������� ������ ��� ������ 

		// ���������� ������� 
		for (int i = 0; i < size; i++)
		{
			cout << "[" << i + 1 << "] = ";
			cin >> arr[i];
		}
		cin.ignore();

		// ���������� ������� 



		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					// ������ �������� ������� 
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
				if (arr[size - 1 - j] < arr[size - 2 - j])
				{
					temp = arr[size - 1 - j];
					arr[size - 1 - j] = arr[size - 2 - j];
					arr[size - 2 - j] = temp;
				}
			}
		}



	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		arr[i] = 0;
	}

	getchar();
	return(0);
}