// ������������ ������� //

// ������������ - ���������� ����������� ������� �� ������������
// ��� ������� � ����������� ������� ���������� ���������
// �������� � ������ ������������ ��� �� ���������� ����������

// ��������� ������������
// class ���_������_������ : [��� ������������] ���_�������������_������1,
//                                              ���_�������������_������2,
//{
//..
//};

// ��� "���_������������" - ���� public, protected � private,
// �� ��������� �� �����������

// !!Picture - lab6-perenos Tranfer to text!!

// 2. �������
// ������� ����� weapon c ������ ������ ��-���� ��� ������ ������
// ������� ������������ ����� launcher � rifle

#include <iostream>
using namespace std;

class weapon // ������� ������������ ��������
{
public:
	double firespeed;
	double damage;
	int ammo_value;
	double weight;
	double firerange;
	char name[10] = { 0 };

	struct launcher;

	struct rifle;
};

class weapon::launcher
{
	double range;
	bool auto_aim;
	damage = 7.5
};

class weapon::rifle
{
	double range
};

int main()
{

}