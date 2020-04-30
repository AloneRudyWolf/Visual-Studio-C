#include <cstring>
#include <iostream>
#include <string>
#include <fstream>
#include <bitset>

using namespace std;
/*������ � �����*/


// ������ ������� �-���� ������������ �� ���� ������ �������� � ������� ����������

char cstr1[] = "C-style string1";
char cstr2[] = { 'C', '-', 's', 't', 'y', 'l', 'e', ' ', 's', 't', 'r', 'i', 'n', 'g', '2', '\0' };
char cstr3[] = { 'C', '-','s','t','l','e',' ','s','t','r','i','n','g' };//������ ��� �������� ���������(������������)

// ������� ��� ������ � �-��������

// ����� �� ������ printf(char[], , ,)

// � ������� printf ����� �� ������ �������� ������� ������
// �� � ����������� � ��� ������ ����������, ������� �������������� ��
// � ���������� ��� � �������� ��������������
// �������������� printf("������� %s ������ %f", ��������1, ��������2")

// �������, ���� ����� ������������� ���������, ������������ � ������� ������
// �������� %

// �������� �������� �������������� ������ �� ������� ������� � ������� http://www.cplusplus.com/reference/cstdio/printf/
// �������� ��������� �� ���
// %f - �������� �������������� �� ����� %f, ����������� � ���� ����� � ��������� ������
// %s - �������� ������������� �� ����� %s ��� ������
// %d - �������� ������������� �� ����� %d ��� ����� �����
// %e - �������� ������������� �� ����� %e ��� ����� � ���������������� ����

// ����������� ����� strcat(*char, *char)
// ����������� �� ����� ������ � ������ strcpy()
// ��������� strcmp()
// ����� ������ strlen()


// � ����������� ���������� �++ ������ �������� ��������������� � ����� std::string,
// � ������� ��� �� ������� ����� ����������������� ������ ���������,
// � ��� �������� ����������� ���������

std::string cppstr1 = " C++ - style string ";
std::string cppstr2 = " C++ - style string ";

int main()
{
	printf(cstr1);
	printf("\n");
	printf(cstr3);// ������������� ������� �� ��������


	printf("Parmetr1 = %10f, parameter2 = %d, parametr3 = %s\n\n ", 1.5, 100, "\" some string\ ");
	char place_to_copy[255];
	char place_from_copy[255] = "abcdefghijklmn";
	strcpy_s(place_to_copy, 254, place_from_copy);
	printf("Result = %s", place_to_copy);
	//1)
	strcat_s(cstr1, 255, cstr2);
	printf(cstr1); // ����������� ����� � �� �����
	cout << '\n';
	//2)
	strcpy_s(place_to_copy, 255, cstr2);
	printf_s("Result = %s", place_to_copy);
	//3)
	cout << '\n';
	strcmp(cstr1, cstr2);

	cout << (strcmp(cstr1, cstr2));// ���� ������� "1" ,�� 1 ������ ������ 2,���� "-1" ,�� 2 ������ 1

	//4)
	cout << '\n';
	cout << "������ ������ - " << (strlen(cstr1)) << " ��������";




	getchar();
	return 0;

}
// 3. ������ ��������� �������
// ����������� (������������) ����� strcat(*char, *char)
// ����������� �� ����� ������ � ������ strcpy()
// ��������� strcmp ()
//������ ������ � ������� scanf(*char,��������)
// ����� ������ strlen()
// ������� ������ � ������ ������������ � ��������� ��������



//4. ������ �++
//� ����������� ���������� �++ ������ �������� �������������� � ����� std::string
//� ������� ����� ������� ����� ����� ������������ ������ ���������
//(������������, ������� �����, �������, ��������, ����� � �.�
//� ��� �������� ����������� ��������� + (�����������), ����, �����, � �.�
//��� ���� ������� �� ����� � - ����� ������ ������ �������� ��������� ������,
//���������� � ������